#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int x, y;
  char a;
  scanf("%d %d %c", &x, &y, &a);
  if (a == '+'){
  printf("RESP:%d", x + y);
}else if (a == '-'){
    printf("RESP:%d", x - y);
  }else if (a == '*'){
    printf("RESP:%d", x * y);
  }else if (a == '/'){
    printf("RESP:%d", x / y);
  }else{
    printf("Invalido");
  }
  return 0;
}
