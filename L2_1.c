#include <stdio.h>

int main(){

  int i, s, e, d;
  //char str[6] = "RESP:";
  scanf("%d%d",&s,&e);
  i = s+1;
  printf("RESP:");
  for(i;i>s && i<e;i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ",i);
    }
  }
    return 0;
}
