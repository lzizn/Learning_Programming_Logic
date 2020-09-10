#include <stdio.h>

int main()
{
  int i = 1, num, resultado = 0;
  scanf("%d", &num);
  for(i; i<=num; i++)
  {
    if (num % i == 0)
    {
      resultado++;
    }
  }
  if (resultado == 2)
  {
    printf("Primo");
  }
  else
  {
    printf("Nao primo");
  }
  return 0;
}
