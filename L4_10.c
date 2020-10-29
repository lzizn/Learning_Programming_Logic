#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct tponto{
  int x;
  int y;
} tPonto;

int main(){
  tPonto primeiro_ponto, ponto, ponto_mais_proximo;
  float distancia, menor_distancia = 10000000;
  int n, i = 1;
  scanf("%d", &n);
  scanf("%d %d", &primeiro_ponto.x, &primeiro_ponto.y);
  --n;
  for( i; i<=n; i++ ){
    scanf("%d %d", &ponto.x, &ponto.y);
    distancia = sqrt(((ponto.x-primeiro_ponto.x)*(ponto.x-primeiro_ponto.x)+(ponto.y-primeiro_ponto.y)*(ponto.y-primeiro_ponto.y)));
    if(distancia < menor_distancia){
      menor_distancia = distancia;
      ponto_mais_proximo = ponto;
    }
  }
  printf("Mais proximo: (%d,%d)", ponto_mais_proximo.x, ponto_mais_proximo.y);
  return 0;
}