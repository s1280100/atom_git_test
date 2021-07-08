#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s,s1,s2;
  char name[50];
  srand(time(NULL));


  s1= rand() % 6 + 1;
  s2= rand() % 6 + 1;
  s=s1+s2;
  printf("What is your name?\n");
  scanf("%s",name);
  printf("> %s\n",name);
  printf("Die 1::%d \n", s1);
  printf("Die 2::%d \n", s2);
  printf("Total value:%d \n", s);
  if(s>7){
    printf("%s Won!\n",name);
  }
  else{
    printf("%s Lost!\n",name);
  }
  return 0;

}
