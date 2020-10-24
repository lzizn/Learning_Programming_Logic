#include <stdio.h>
int main(){
  int i, resto, N = 0, padrao = 0;
  while(scanf("%d ", &i) == 1){
    padrao = i;
    while(i > 0){
      resto = i%10;
      i = i/10;
      N *= 10;
      N += resto;
    }
    if(N == padrao){
      printf("S\n");
    }else{
      printf("N\n");
    }
    N = 0;
    resto = 0;
    i = 0;
    padrao = 0;
  }
  return 0;
}