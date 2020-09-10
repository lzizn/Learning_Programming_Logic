#include <stdio.h>

int main()
{
  int x,y,z;
  scanf("%d%d%d",&x,&y,&z);
  if (x < y && y < z)
  {
    printf("N1 = %d, N2 = %d, N3 = %d",x,y,z);
  }
  else if(x < z && z < y)
  {
    printf("N1 = %d, N3 = %d, N2 = %d",x,z,y);
  }
  else if(y < z && z < x)
  {
    printf("N2 = %d, N3 = %d, N1 = %d",y,z,x);
  }
  else if(y < x && x < z)
  {
    printf("N2 = %d, N1 = %d, N3 = %d",y,x,z);
  }
  else if(z < y && y < x)
  {
    printf("N3 = %d, N2 = %d, N1 = %d",z,y,x);
  }
  else if(z < x && x < y)
  {
    printf("N3 = %d, N1 = %d, N2 = %d",z,x,y);
  }
  return 0;
}
