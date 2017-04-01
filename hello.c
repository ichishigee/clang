#include <stdio.h>
#include <ctype.h>

int main(void) {
  int ch;
  ch = getchar();
  while(ch != EOF) {
    ch = toupper(ch);
    putchar(ch);
    ch = getchar();
  }
  return 0;
}



