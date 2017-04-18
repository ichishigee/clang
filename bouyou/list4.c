
#include <stdio.h>

int main(void)
{
  FILE *fp;

  fp=fopen("text1.txt", "a");
  
  if(fp==NULL) {
    printf("not txt\n");
    return 1;
  }
  else {
    printf("open\n");
  }

  fputs("hello\n", fp);
  printf("kakokomi\n");
  
  fclose(fp);
  printf("close\n");
  
  return 0;
}


