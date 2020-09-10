#include <stdio.h>

int main()
{
  int p, i, r;
  scanf("%d%d",&p,&i);
  r = i % p;
  if (r == 0)
  {
    printf("RESP:%d", p);
  }
  else
  {
    printf("RESP:%d", r);
  }
  return 0;
}
