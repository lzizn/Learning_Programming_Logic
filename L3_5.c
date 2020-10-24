#include <stdio.h>
#include <stdlib.h>

int main()
{
  int s, e, ab, cd, soma, mult;
  scanf("%d %d", &s, &e);
  s = s+1;
  for(s ; s < e ; s++)
  {
    ab = s / 100;
    cd = s - 100*ab;
    soma = ab + cd;
    mult = soma * soma;
    if (mult == s)
    {
      printf("%d\n", s);
    }
  }
  return 0;
}
