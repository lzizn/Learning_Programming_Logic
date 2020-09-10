#include <stdio.h>
#include <math.h>
int main(){

  float R, AREA, PI, R2;
  PI = 3.141592;
  scanf("%f",&R);
  AREA = PI*R*R;
  R2 = sqrt((AREA/2)/PI);
  printf("%.2f %.2f",AREA,R2);

  return 0;
}
