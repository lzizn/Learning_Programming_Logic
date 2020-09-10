#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n, k = 1;
  float soma = 0, pi;
  scanf("%d", &n);
  for(k; k <= n; k++)
  {
      soma = (6 / (pow(k,2)) + soma);
      pi = sqrt(soma);
  }
  printf("%.6f", pi);
  return 0;
}
