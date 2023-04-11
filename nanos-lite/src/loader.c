#include <proc.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>


#if defined(__ISA_AM_NATIVE__)
#define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV64__)
#define EXPECT_TYPE EM_RISCV
#else
#define EXPECT_TYPE EM_NONE
#endif

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);

static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd = fs_open(filename,0,0);
  Elf_Ehdr* ehdr = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  fs_read(fd,ehdr, sizeof(Elf_Ehdr));
  assert(*(uint32_t *)ehdr->e_ident == 0x464c457f);
  assert(ehdr->e_machine == EXPECT_TYPE);
  Elf_Phdr* phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)*ehdr->e_phnum);
  fs_lseek(fd, ehdr->e_phoff, SEEK_SET);
  fs_read(fd,phdr, sizeof(Elf_Phdr)*ehdr->e_phnum);

  for(int i = 0; i < ehdr->e_phnum; i++){
    if(phdr[i].p_type==PT_LOAD){
      fs_lseek(fd, phdr[i].p_offset, SEEK_SET);
      fs_read(fd,(char*)phdr[i].p_vaddr, phdr[i].p_filesz);
      memset((char*)(phdr[i].p_paddr + phdr[i].p_filesz), 0, phdr[i].p_memsz - phdr[i].p_filesz);
    }
  }
  return ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (void *)entry);
  ((void(*)())entry) ();
}

