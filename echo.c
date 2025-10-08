#include "types.h"
#include "stat.h"
#include "user.h"
#include "kdeclare.h"

int main(int argc, char *argv[])
{

  for(int i = 1; i < argc; i++){
    printf(stdio, "%s", argv[i]);
    if(i + 1 < argc){
      printf(stdio, " ");
    }
  }
  printf(stdio, "\n");
  exit();
}
