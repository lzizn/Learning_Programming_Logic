#include <stdio.h>
#include <math.h>

int main()
{
  int n, somaneg = 0, somapos = 0, contneg = 0, contpos = 0;
  char a = ' ';
  while (a == ' ')
  {
    scanf("%d%c", &n,&a);
    if (n < 0)
    {
      somaneg += n;
      contneg++;
    }
    if (n > 0)
    {
      somapos += n;
      contpos++;
    }
  }
  printf("%d %d %d %d", contneg, contpos, somaneg, somapos);
  return 0;
}
