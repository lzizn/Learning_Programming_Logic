#include <stdio.h>
#include <stdlib.h>

int somadosdigitos(int n);
void parImpar(int n);
void valorPrimo(int n);

int somadosdigitos(int n){
  int soma = 0;
  float resto;
  if (n % 10 == n)
  {
    return n;
  }
  while (n > 0)
  {
    resto = n % 10;
    soma += resto;
    n /= 10;
  }
  return soma;
}

void parImpar(int n){
  if ((n%2) == 0){
    printf("Par ");
  }else{
    printf("Impar ");
  }
}
void valorPrimo(int n){
  int i = 2;
  int resultado = 0;
  for (i; i < 99999; i++)
  {
    resultado = n % i;
    if ((resultado == 0 && n != i) || n == 1)
    {
      printf("Nao e primo\n");
      return;
    }
  }
  printf("Primo\n");
}

int main(){
  int N, valor = 0;
  scanf("%d", &N);
  if (N < 10)
  {
    printf("%d ", N);
    parImpar(N);
    valorPrimo(N);
  }
  while (N >= 10)
  {
    N = somadosdigitos(N);
    printf("%d ", N);
    parImpar(N);
    valorPrimo(N);
  }

  return 0;
}