#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int codigo;
  float valor;
} tBoleto;

tBoleto LeBoleto();
float ValorBoleto(tBoleto boleto);
tBoleto MaisCaro(tBoleto boleto, tBoleto boleto_mais_caro);
tBoleto MaisBarato(tBoleto boleto, tBoleto boleto_mais_barato);
void ImprimirBoleto(tBoleto boleto_mais_caro, tBoleto boleto_mais_barato, float soma);

int main()
{
  tBoleto boleto, boleto_mais_caro, boleto_mais_barato;
  boleto_mais_caro.valor = -100000;
  boleto_mais_barato.valor = 100000;
  float soma_valores = 0;
  int n, i = 1;
  scanf("%d",&n);
  for( i; i <= n; i++ ){
    boleto = LeBoleto();
    soma_valores += ValorBoleto(boleto);
    boleto_mais_caro = MaisCaro(boleto, boleto_mais_caro);
    boleto_mais_barato = MaisBarato(boleto, boleto_mais_barato);
  }
  ImprimirBoleto(boleto_mais_caro, boleto_mais_barato, soma_valores);
  return 0;
}
tBoleto LeBoleto(){
  tBoleto boleto;
  scanf(" %d %f", &boleto.codigo, &boleto.valor);
  return boleto;
}
float ValorBoleto(tBoleto boleto){
  return boleto.valor;
}

tBoleto MaisCaro(tBoleto boleto, tBoleto boleto_mais_caro){
  if ( boleto.valor > boleto_mais_caro.valor ){
    return boleto;
  }else{
    return boleto_mais_caro;
  }
}
tBoleto MaisBarato(tBoleto boleto, tBoleto boleto_mais_barato){
  if ( boleto.valor < boleto_mais_barato.valor ){
    return boleto;
  }else{
    return boleto_mais_barato;
  }
}

void ImprimirBoleto(tBoleto boleto_mais_caro, tBoleto boleto_mais_barato, float soma){
  printf("Mais caro: Cod: %d valor: %.2f\n", boleto_mais_caro.codigo, boleto_mais_caro.valor);
  printf("Mais barato: Cod: %d valor: %.2f\n", boleto_mais_barato.codigo, boleto_mais_barato.valor);
  printf("Soma: %.2f", soma);
}