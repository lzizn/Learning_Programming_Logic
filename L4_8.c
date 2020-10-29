#include <stdio.h>
#include <stdlib.h>

typedef struct tAnimal{
  float peso;
  float nAnimais;
  float valorRacao;
  float prctPeso;
} tAnimal;

tAnimal LeAnimal();
float QtdRacao(tAnimal);
float CalcularPreco(float qtdRacao, tAnimal);

int main(){
  tAnimal animal;
  int n, i = 1;
  float qntd_racao, soma = 0;
  scanf("%d", &n);
  for( i; i<=n; i++ ){
    animal = LeAnimal();
    qntd_racao = QtdRacao(animal);
    soma += CalcularPreco(qntd_racao, animal);
  }
  printf("Valor total: %.2f reais", soma);
  return 0;
}

tAnimal LeAnimal(){
  tAnimal animal;
  scanf("%f %f %f %f", &animal.nAnimais, &animal.prctPeso, &animal.peso, &animal.valorRacao);
  return animal;
}

float QtdRacao(tAnimal animal){
  return ((animal.prctPeso / 100) * animal.peso);
}
float CalcularPreco(float qtdRacao, tAnimal animal){
  return (qtdRacao*animal.valorRacao*animal.nAnimais);
}