#include <stdio.h>

int main()
{
  int s, e, i, aux, resultado, conta, k = 1, valor, j;
  scanf("%d%d",&s,&e);
  i = s+1;

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
      printf("\n%d\n", i);
      k = 1;
       while (k < e)
      {
        valor = 0;
        conta = k % i;
        //printf("\n valor de conta: %d\n, valor de k: %d\n, valor do denominador i: %d\n", conta, k, i);
        if (conta == 0 && k >= i)
        {
          j = 2 * i;
          if (j >= e)
          {
            printf("*");
          }
          else if(j < e && k > i)
          {
            printf("%d ", k);
          }
          //printf("\n valor de j: %d \n valor de e: %d \n",j,e);
        }
        k++;
      }
    }
  }
  return 0;
}
