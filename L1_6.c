#include <stdio.h>

int main(){

  float  a,b, med;
  scanf("%f %f",&a,&b);
  med = (a+b)/2;
  if (med >= 7)
  {
    printf("%.1f - Aprovado", med);
  }
  else if (med >= 5 && med < 7)
  {
    printf("%.1f - De Recuperacao", med);
  }
  else
  {
    printf("%.1f - Reprovado", med);
  }
  return 0;
}
