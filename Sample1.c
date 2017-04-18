#include <stdio.h>

int main(void)
{
  char ch;
  printf("英数字入力\n");
  
  ch=getchar();

  printf("%cが入力\n", ch);

  return 0;
}
