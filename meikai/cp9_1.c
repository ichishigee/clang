#include <stdio.h>

struct XYdata {
  int x;
  int y;
};

void square(struct XYdata sp){
  printf("menseki=%d\n", sp.x*sp.y);
}
  

  
int main(void){
  struct XYdata dt;

  dt.x=10;
  dt.y=20;
  square(dt);
  
  return 0;
}



