#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct tponto{
  int x;
  int y;
} tPonto;

typedef struct tpontos{
  int x1;
  int y1;
  int x2;
  int y2;
} tReta;

int main(){
  int n, i = 1;
  float distancia_inicio, distancia_fim, y_variacao;
  tPonto ponto;
  tReta reta;
  scanf("%d", &n);
  for ( i; i <= n; i++){
    scanf("%d %d %d %d %d %d", &ponto.x, &ponto.y, &reta.x1, &reta.y1, &reta.x2, &reta.y2); 
    distancia_inicio = sqrt(((ponto.x-reta.x1)*(ponto.x-reta.x1))+((ponto.y-reta.y1)*(ponto.y-reta.y1)));
    distancia_fim = sqrt(((ponto.x-reta.x2)*(ponto.x-reta.x2))+((ponto.y-reta.y2)*(ponto.y-reta.y2)));
    if (distancia_inicio == distancia_fim) {
      printf("EQUIDISTANTE\n");
    }else if(distancia_inicio > distancia_fim) {
      printf("FIM\n");
    }else{
      printf("INICIO\n");
    }
  }
  return 0;
}