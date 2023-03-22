#include <common.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *strtab;
Elf64_Sym *symtab = NULL;
int symtab_entry_num = 0;
typedef struct
{
    uint64_t addr;
    uint64_t size;
    char* name;
}Func;

Func funcs[64];
int func_num = 0;



void init_elf(char *elf_file){
    FILE *fp = fopen(elf_file, "r");
    Assert(fp, "Can not open '%s'", elf_file);
    Elf64_Ehdr *ehdr = (Elf64_Ehdr*)malloc(sizeof(Elf64_Ehdr));
    if(fread(ehdr, sizeof(Elf64_Ehdr), 1, fp)==0){
        assert(0);
    }
    Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr));
    fseek(fp, ehdr->e_shoff, SEEK_SET);
    if(fread(shdr, sizeof(Elf64_Shdr), ehdr->e_shnum, fp)==0){
        assert(0);
    }
    int symtab_num=-1, strtab_num=-1;
    for(int i = 0; i < ehdr->e_shnum; i++){
        if(shdr[i].sh_type==SHT_SYMTAB)symtab_num = i;
        if(shdr[i].sh_type==SHT_STRTAB){
            strtab_num = i;
            if(symtab_num!=-1)break;
        }
    }
    fseek(fp, shdr[symtab_num].sh_offset, SEEK_SET);
    if(fread(symtab, 1, shdr[symtab_num].sh_size, fp)==0){
        assert(0);
    }
    fseek(fp, shdr[strtab_num].sh_offset, SEEK_SET);
    if(fread(strtab, 1, shdr[strtab_num].sh_size, fp)==0){
        assert(0);
    }
    symtab_entry_num = shdr[symtab_num].sh_size/shdr[symtab_num].sh_entsize;
    for(int i = 0;i< symtab_entry_num;i++){
        if(ELF64_ST_TYPE(symtab[i].st_info)==STT_FUNC){
            funcs[func_num].size = symtab[i].st_size;
            funcs[func_num].addr = symtab[i].st_value;
            funcs[func_num].name = (char*)(strtab + symtab[i].st_name);
            func_num++;
        }
    }
}

