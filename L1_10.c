#include <stdio.h>

int main(){

  float y;
  int x;
  scanf("%d",&x);
  y = x%2;
  if (y == 0)
  {
    printf("Par");
  }
  else
  {
    printf("Impar");
  }
  return 0;
}
