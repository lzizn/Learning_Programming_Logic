#include <stdio.h>
#include <stdlib.h>

int main()
{
  int s, e, j, k, i;
  scanf ("%d%d", &s, &e);
  i = s;
  for (i; i<=e; i++)
  {
    j = 1;
    while (j <= 10)
    {
      printf("%d x %d = %d\n",i,j,i*j);
      j++;
    }
  }
  return 0;
}
