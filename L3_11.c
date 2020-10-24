#include <stdio.h>
#include <stdlib.h>

void PrintaImpares (int N);
void PrintaPares (int N);

void PrintaImpares(int N){
  int i = 0, count = 0;
  while(count < N){
    i++;
    if (i%2 != 0){
      printf("%d ", i);
      count++;
    }
  }
}

void PrintaPares(int N){
  int i = 1, count = 0;
  while(count < N){
    i++;
    if (i%2 == 0){
      printf("%d ", i);
      count++;
    }
  }
}

int main(){
  int TIPO = 0, valor_max;
  scanf("%d %d", &TIPO, &valor_max);
  if(TIPO == 1){
    PrintaImpares(valor_max);
  }else{
    PrintaPares(valor_max);
  }
  return 0;
}