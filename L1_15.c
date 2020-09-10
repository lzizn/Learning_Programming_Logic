#include <stdio.h>
#include <stdlib.h>

int main()
{
  short int n, ordem, div, aux;
  scanf("%hd%hd",&n,&ordem);
  if (ordem == 1)
  {
    div = n % 10;
    if (div % 2 == 0)
    {
      printf("PAR");
    }
    else
    {
      printf("IMPAR");
    }
  }
  else if (ordem == 2)
  {
    aux = n/10;
    if (aux == 0)
    {
      printf("PAR");
    }
    else
    {
      div = aux % 10;
      if (div % 2 == 0)
      {
        printf("PAR");
      }
      else
      {
        printf("IMPAR");
    }
    }
  }
  else if (ordem == 3)
  {
    div = n/100;
    if (div % 2 == 0)
    {
      printf("PAR");
    }
    else
    {
      printf("IMPAR");
    }
  }
  else if (ordem == 4)
  {
    div = n / 1000;
    if (div % 2 == 0)
    {
      printf ("PAR");
    }
    else
    {
      printf("IMPAR");
    }
  }

  return 0;
}
