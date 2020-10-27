#include <stdio.h>
#include <stdlib.h>

typedef struct tponto
{
  int x;
  int y;
} tPonto;

tPonto leCoordenadas();
void fazerosTrem(tPonto coordenadas);

int main()
{
  int qtd, i = 0;
  scanf("%d", &qtd);
  tPonto *coordenadas;
  coordenadas = malloc(qtd * sizeof(tPonto));
  for ( i; i < qtd; i++ )
  {
    coordenadas[i] = leCoordenadas();
    fazerosTrem(coordenadas[i]);
  }
  free(coordenadas);
  return 0;
}

tPonto leCoordenadas()
{
  tPonto coordenadas;
  scanf("%d %d", &coordenadas.x, &coordenadas.y);
  return coordenadas;
}

void fazerosTrem(tPonto coordenadas)
{
  if (coordenadas.x == 0 || coordenadas.y == 0){
    printf("(%d, %d) 0 (%d, %d) 0\n", coordenadas.x, coordenadas.y, (coordenadas.x*-1), (coordenadas.y*-1));
  }
  else if(coordenadas.x > 0 && coordenadas.y > 0)
  {
    printf("(%d, %d) 1 (%d, %d) 3\n", coordenadas.x, coordenadas.y, (coordenadas.x*-1), (coordenadas.y*-1));
  }
  else if(coordenadas.x > 0 && coordenadas.y < 0)
  {
    printf("(%d, %d) 4 (%d, %d) 2\n", coordenadas.x, coordenadas.y, (coordenadas.x*-1), (coordenadas.y*-1));
  }
  else if(coordenadas.x < 0 && coordenadas.y > 0)
  {
    printf("(%d, %d) 2 (%d, %d) 4\n", coordenadas.x, coordenadas.y, (coordenadas.x*-1), (coordenadas.y*-1));
  }
  else if(coordenadas.x < 0 && coordenadas.y < 0)
  {
    printf("(%d, %d) 3 (%d, %d) 1\n", coordenadas.x, coordenadas.y, (coordenadas.x*-1), (coordenadas.y*-1));

  }
}