#include <common.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char strtab[10000];
Elf64_Sym symtab[200];
int symtab_entry_num = 0;
typedef struct
{
    uint64_t addr;
    uint64_t size;
    char* name;
}Func;

Func funcs[64];
int func_num = 0;

char ftrace_buf[500][100];
int ftrace_num = 0;

void is_func(uint64_t pc, uint64_t dnpc,bool is_return){
    for(int i =0;i<func_num;i++){
        if(dnpc>=funcs[i].addr && dnpc<funcs[i].addr+funcs[i].size){
            if(is_return){
                sprintf( ftrace_buf[ftrace_num], "%lx:  ret[%s] ", pc, funcs[i].name);
            }
            else{
                sprintf(ftrace_buf[ftrace_num], "0x%lx:   call[%s@0x%lx]", pc, funcs[i].name, funcs[i].addr);
            }
        }
        ftrace_num++;
        ftrace_num%=500;
    }
}


void init_elf(char *elf_file){
    //printf("%s\n",elf_file);
    FILE *fp = fopen(elf_file, "r");
    Assert(fp, "Can not open '%s'", elf_file);
    fseek(fp, 0L, SEEK_SET);
    Elf64_Ehdr *ehdr = (Elf64_Ehdr*)malloc(sizeof(Elf64_Ehdr));
    if(fread(ehdr, sizeof(Elf64_Ehdr), 1, fp)==0){
        assert(0);
    }
    //printf("1\n");
    Elf64_Shdr shdr[100];
    fseek(fp, ehdr->e_shoff, SEEK_SET);
    if(fread(shdr, sizeof(Elf64_Shdr), ehdr->e_shnum, fp)==0){
        assert(0);
    }
    //printf("1\n");
    int symtab_num=-1, strtab_num=-1;
    for(int i = 0; i < ehdr->e_shnum; i++){
        if(shdr[i].sh_type==SHT_SYMTAB)symtab_num = i;
        if(shdr[i].sh_type==SHT_STRTAB){
            strtab_num = i;
            if(symtab_num!=-1)break;
        }
    }
    printf("%d %d\n", symtab_num, strtab_num);
    fseek(fp, shdr[symtab_num].sh_offset, SEEK_SET);
    if(fread(symtab, 1, shdr[symtab_num].sh_size, fp)==0){
        assert(0);
    }
    printf("1\n");
    fseek(fp, shdr[strtab_num].sh_offset, SEEK_SET);
    if(fread(strtab, 1, shdr[strtab_num].sh_size, fp)==0){
        assert(0);
    }
    printf("1\n");
    symtab_entry_num = shdr[symtab_num].sh_size/shdr[symtab_num].sh_entsize;
    printf("%d\n", symtab_entry_num);
    for(int i = 0;i< symtab_entry_num;i++){
        if(ELF64_ST_TYPE(symtab[i].st_info)==STT_FUNC){
            funcs[func_num].size = symtab[i].st_size;
            funcs[func_num].addr = symtab[i].st_value;
            funcs[func_num].name = (char*)(strtab + symtab[i].st_name);
            //printf("%s\n",funcs[func_num].name);
            func_num++;
        }
    }
    //printf("%d\n",func_num);
}

void print_func(){
    printf("==================ftrace====================\n");
    for(int i = 0;i< ftrace_num;i++){
        printf("%s\n", ftrace_buf[i]);
    }
}