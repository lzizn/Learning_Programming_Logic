#include <stdio.h>

int main()
{
  int n, m = 1, cont = 0, mediaaux = 0, maior = 0;
  float media;
  while (m != 0)
  {
    scanf("%d", &n);
    if (n == 0)
    {
      m = 0;
    }
    else
    {
      cont=cont+1;
      mediaaux += n;
      media = (float)mediaaux / cont;
      if (n > maior)
      {
        maior = n;
      }
      printf("%d %.6f\n" , maior, media);
    }

  }
  return 0;
}
