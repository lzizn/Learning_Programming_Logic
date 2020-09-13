#include <stdio.h>

int main(){
  int a, b;
  scanf("%d%d", &a, &b);
  if (a > 10 || b > 10 || a < 0 || b < 0) printf("Invalido");
  else{
    if (a == b && a>=6) printf("Uma mulher");
    if (a == b && a<=5) printf("Um homem");
    if (a != b)
    {
      if (a<=5 && b>=6) printf("Um casal");
      if (a<=5 && b<=5) printf("Par de homens");
      if (a>=6 && b>=6) printf("Par de mulheres");
    }
  }
  return 0;
}
