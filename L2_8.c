#include <stdio.h>

int main()
{
  int s, e, i, aux, resultado, conta;
  scanf("%d%d",&s,&e);
  i = s+1;
  printf("RESP:");
  for(i; i>s && i<e; i++)
  {
    //printf("\n***valor de i: %d***\n", i);
    aux = 1;
    resultado = 0;
    while (i >= aux)
    {
      conta = i % aux;
      if (conta == 0)
      {
        resultado = resultado + 1;
      }
      aux = aux + 1;
    }
    if (resultado == 2)
    {
      printf("%d ", i);
    }
  }
  return 0;
}
