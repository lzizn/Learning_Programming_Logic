#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct tponto
{
  int x;
  int y;
} tPonto;


int main()
{
  tPonto *ponto;  
  int n, i = 0;
  float x_variacao = 0, y_variacao = 0, distancia;
  scanf("%d", &n);
  ponto = malloc(n * sizeof(tPonto));
  scanf("%d %d", &ponto[i].x, &ponto[i].y);
  printf("-\n");
  i = 1;
  for( i; i < n; i++ )
  {
    scanf("%d %d", &ponto[i].x, &ponto[i].y);
    x_variacao = ponto[i].x - ponto[i-1].x;
    y_variacao = ponto[i].y - ponto[i-1].y;
    distancia = sqrt(((x_variacao)*(x_variacao))+((y_variacao)*(y_variacao)));
    printf("%.2f\n", distancia);
  }

  free(ponto);
  return 0;
}