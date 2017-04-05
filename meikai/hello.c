#include <stdio.h>
#define JAPAN_MODE 1

#if JAPAN_MODE == 1
char msg[]="こんにちは";
#else
char msg[]="hello";
#endif

int main(void) {
  printf("msg = %s\n", msg);
  return 0;
}



