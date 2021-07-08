#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){


  char name[50];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("> %s\n",name);

  return 0;

}
