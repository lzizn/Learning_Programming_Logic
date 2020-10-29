#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float base;
  float altura;
  float raio;
} tForma;

tForma LeForma();
int EhQuadrado(tForma forma);
int EhRetangulo(tForma forma);
int EhCirculo(tForma forma);

int main(){
  tForma forma;
  int cont_quadrado = 0, cont_retangulo = 0, cont_circulo = 0, n, i = 1;
  scanf("%d", &n);
  for( i; i <= n; i++){
    forma = LeForma();
    cont_quadrado += EhQuadrado(forma);
    cont_circulo += EhCirculo(forma);
    cont_retangulo += EhRetangulo(forma);
  }
  printf("Circulos: %d\nQuadrados: %d\nRetangulos: %d", cont_circulo, cont_quadrado, cont_retangulo);
  return 0;
}

tForma LeForma(){
  tForma forma;
  scanf("%f %f %f", &forma.base, &forma.altura, &forma.raio);
  return forma;
}

int EhQuadrado(tForma forma){
  if (forma.raio < 0 && forma.base == forma.altura){
    return 1;
  }else{
    return 0;
  }
}
int EhRetangulo(tForma forma){
  if (forma.raio < 0 && forma.base != forma.altura){
    return 1;
  }else{
    return 0;
  }
}
int EhCirculo(tForma forma){
  if (forma.raio > 0 && forma.base < 0 && forma.altura < 0){
    return 1;
  }else{
    return 0;
  }
}