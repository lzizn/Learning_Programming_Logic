#include <stdio.h>

int main()
{
  int m, n;
  scanf("%d%d",&n,&m);
  n = n+1;
  for(n; n<m; n++)
  {
    if (n % 3 == 0 || n % 4 == 0 || n % 7 == 0)
    {
      printf("%d ",n);
    }
  }
  return 0;
}
