#include <stdio.h>
#include <stdlib.h>

int main(){

  float t, convert;
  char tipo;
  scanf("%f %c",&t,&tipo);
  if (tipo == 'c' || tipo == 'C')
  {
    convert = (9*t+160)/5;
    printf("%.2f (F)",convert);
  }
  else {
    convert = (5*t-160)/9;
    printf("%.2f (C)",convert);
  }
  return 0;

}
