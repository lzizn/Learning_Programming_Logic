#include <stdio.h>

int main(){

  double x, y, x2, y2, L, A;
  scanf("%lf%lf%lf%lf",&x,&y,&x2,&y2);
  L = x2-x;
  A = y2-y;
  printf("%.2lf",2*L+2*A);
  return 0;
}
