#include <stdio.h>

int main(void){
  int mydt = 1234;
  int *pt;

  pt=&mydt;
  
  printf("mydt = %d\n", mydt);
  printf("*pt=%d\n", *pt);

  printf("mydtのアドレス%p\n", &mydt);
  printf("pt:%p\n", pt);
  return 0;
}



