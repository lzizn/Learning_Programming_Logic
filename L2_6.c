#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n, k, j, x;
  double soma, w;
  scanf("%d",&n);
  if (n == 1)
  {
    soma=1,k=1, j=2;
    while (j<=50)
    {
      k = k+2;
      soma = (double)k/j + soma;
      j++;
      //
    }
    printf("%.6lf\n", soma);
  }
  else if (n == 2)
  {
    w = 1, j = 50;
    for(j; j >= 1; j--)
    {
      w = w * 2;
      soma = (double)w/j + soma;
    }
      printf("%.6lf", soma);
  }
  else if (n == 3)
  {
    for(j = 1; j <= 10; j++)
    {
      soma = (double)(j / pow(j, 2)) + soma;
    }
      printf("%.6lf", soma);
  }
  return 0;
}
