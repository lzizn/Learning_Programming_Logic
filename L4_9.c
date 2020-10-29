#include <stdio.h>
#include <stdlib.h>

typedef struct tpessoa{
  char nome;
  float altura;
  float peso;
} tPessoa;

tPessoa LePessoa();
float CalcularIMC(tPessoa pessoa);
int EhMaisAlta(tPessoa pessoa,tPessoa mais_alta);
int EhMaisBaixa(tPessoa pessoa,tPessoa mais_baixa);

int main(){
  tPessoa mais_alta, mais_baixa, pessoa;
  mais_alta.altura = 0.0;
  mais_baixa.altura = 3.0;
  float imc_maior, imc_menor;
  int n, i = 1;
  scanf("%d", &n);
  for( i; i <= n; i++ )
  {
    pessoa = LePessoa();
    if( EhMaisAlta(pessoa, mais_alta) == 1 )
    {
      mais_alta = pessoa;
    }
    if( EhMaisBaixa(pessoa, mais_baixa) == 1 )
    {
      mais_baixa = pessoa;
    }
  }
  imc_maior = CalcularIMC(mais_alta);
  imc_menor = CalcularIMC(mais_baixa);
  printf("Alta: N:%c A:%.2f P:%.2f I:%.2f\n", mais_alta.nome, mais_alta.altura, mais_alta.peso, imc_maior);
  printf("Baixa: N:%c A:%.2f P:%.2f I:%.2f", mais_baixa.nome, mais_baixa.altura, mais_baixa.peso, imc_menor);
  return 0;
}

tPessoa LePessoa(){
  tPessoa pessoa;
  scanf(" %c,%f,%f", &pessoa.nome, &pessoa.altura, &pessoa.peso);
  return pessoa;
}
int EhMaisAlta(tPessoa pessoa,tPessoa mais_alta){
  if ( pessoa.altura > mais_alta.altura )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int EhMaisBaixa(tPessoa pessoa,tPessoa mais_baixa)
{
  if ( pessoa.altura < mais_baixa.altura )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
float CalcularIMC(tPessoa pessoa){
  return (pessoa.peso/(pessoa.altura*pessoa.altura));
}