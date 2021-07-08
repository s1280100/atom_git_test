#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s,s1,s2;
  srand(time(NULL));

  s1= rand() % 6 + 1;
  s2= rand() % 6 + 1;
  s=s1+s2;
  printf("Die 1::%d \n", s1);
  printf("Die 2::%d \n", s2);
  printf("Total value:%d \n", s);

  return 0;
  }
