//código criado no dia 28/03/2020 por laian braum
#include <stdio.h>

int main()
{
  float mediaaux = 0, media;
  int x = 0, n=0, auxmenor = 0, m=0, maior=0, menor=0, par=0, impar=0, y=0;
  scanf("%d", &n);
  //loop dos n valores
  for(x; x<n; x++)
  {
    scanf("%d", &m);
    //somando os valores da media
    mediaaux += m;
    //condicional do maior valor
    if (maior < m)
    {
      maior = m;
    }
    //fazendo auxmenor guardar o primeiro valor fora da condicional
    while (y == 0)
    {
      auxmenor = m;
      y++;
    }
    //condicional de par ou impar
    if (auxmenor >= m)
    {
      auxmenor = m;
    }
    if (m % 2 == 0)
    {
      par++;
    }
    else
    {
      impar++;
    }
  }
  //dividindo os valores para achar a média
  media = mediaaux / n;
  printf("%d %d %d %d %.6f ", maior, auxmenor, par, impar, media);
  return 0;
}
