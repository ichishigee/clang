#include <stdio.h>

void message(void){
  printf("半径を入力してください:");
}

double input(void){
  double dt;
  scanf("%lf", &dt);
  return dt;
}

double area(double r){
  return r*r*3.14;
}

void disp(double d){
  printf("面積=%f\n", d);
}

int main(void) {
  double r, s;
  message();
  r = input();
  s = area(r);
  disp(s);
  return 0;
}



