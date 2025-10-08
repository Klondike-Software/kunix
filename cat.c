// Rewrite NEEDED.

#include "types.h"
#include "stat.h"
#include "user.h"
#include "kdeclare.h"

char buffer[512];

void cat(int fd)
{
  int n;

  while((n = read(fd, buffer, sizeof(buffer))) > 0) {
    if (write(stdio, buffer, n) != n) {
      printf(stdio, "cat: write error\n");
      exit();
    }
  }
  if(n < 0){
    printf(stdio, "cat: read error\n");
    exit();
  }
}

int main(int argc, char *argv[])
{
  int fd;

  if(argc <= 1){
    cat(0);
    exit();
  }

  for(int i = 1; i < argc; i++){
    if((fd = open(argv[i], 0)) < 0){
      printf(stdio, "cat: cannot open %s\n", argv[i]);
      exit();
    }
    cat(fd);
    close(fd);
  }
  exit();
}
