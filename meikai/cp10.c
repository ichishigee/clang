#include <stdio.h>

struct XYdata {
  int x;
  int y;
};


struct XYdata XYdata_add(struct XYdata n1, struct XYdata n2)
{
  struct XYdata wk;
  wk.x=n1.x+n2.x;
  wk.y=n1.y+n2.y;
  return wk;  
}
  
int main(void)
{
  struct XYdata dt1, dt2 = {10, 20}, dt3 = {100, 200};

  dt1=XYdata_add(dt2, dt3);
  printf("dt1.x=%d dt2.y=%d\n", dt1.x, dt1.y);

  return 0;
}



