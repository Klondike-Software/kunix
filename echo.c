// Everyone knows what an echo is!

#include "types.h"
#include "stat.h"
#include "user.h"
#include "kdeclare.h"

int main(int argc, char *argv[])
{
  // Loop through all of the arguments, skipping argv[0] because that is the program name.
  for(int i = 1; i < argc; i++){
    printf(stdio, "%s", argv[i]);
    // print a space between arguments
    if(i + 1 < argc){
      printf(stdio, " ");
    }
  }
  // newline at end.
  printf(stdio, "\n");
  exit();
}
