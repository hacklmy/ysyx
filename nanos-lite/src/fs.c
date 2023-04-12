#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t file_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR,DEV_EVENT, FD_FB };

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);

size_t serial_write(const void *buf, size_t offset, size_t len);
/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0,0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0,0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, 0,invalid_read, serial_write},
  [DEV_EVENT] = {"/dev/events", 0, 0, 0,events_read, invalid_write},
#include "files.h"
};


static int filenum = sizeof(file_table)/sizeof(Finfo);

int fs_open(const char *pathname, int flags, int mode){
  for(int i =0;i< filenum;i++){
    if(strcmp(pathname, file_table[i].name)==0){
      
      file_table[i].file_offset = 0;
      printf("%s\n",pathname);
      return i;
    }
  }
  Log("no match file");
  return -1;
}

size_t fs_read(int fd, void *buf, size_t len){
  if(file_table[fd].read==NULL){
    if(file_table[fd].file_offset + len > file_table[fd].size){
      len = file_table[fd].size - file_table[fd].file_offset;
      Log("len is out of limit");
    }
    size_t ret = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].file_offset, len);
    file_table[fd].file_offset += len;
    return ret;
  }else return file_table[fd].read(buf, file_table[fd].file_offset, len);
}

size_t fs_write(int fd, const void *buf, size_t len){
  if(file_table[fd].write==NULL){
    if(file_table[fd].file_offset + len > file_table[fd].size){
      len = file_table[fd].size - file_table[fd].file_offset;
      Log("len is out of limit");
    }
    size_t ret = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].file_offset, len);
    file_table[fd].file_offset += len;
    return ret;
  }else return file_table[fd].write(buf, file_table[fd].file_offset, len);
}

size_t fs_lseek(int fd, size_t offset, int whence){
  switch(whence){
    case SEEK_SET:
      file_table[fd].file_offset = offset;
      break;
    case SEEK_CUR:
      file_table[fd].file_offset += offset;
      break;
    case SEEK_END:
      file_table[fd].file_offset = file_table[fd].size + offset;
      break;
    default:
      Log("wrong file position\n");
      assert(0);
  }
  return file_table[fd].file_offset;
}

int fs_close(int fd){
  file_table[fd].file_offset = 0;
  return 0;
}

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

const char* get_filename(int fd){
  return file_table[fd].name;
}