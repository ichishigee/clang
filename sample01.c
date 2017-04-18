#include <stdio.h>

int add(int *p1, int *p2){
  int sum = *p1+*p2;
  *p1=10000;
  return sum;
}

int main(void)
{
  int x=10;
  int y=20;

  int i=add(&x, &y);

  x =900;
  
  printf("%d\n", i);


  printf("%d\n", x);
  
  return 0;
}
