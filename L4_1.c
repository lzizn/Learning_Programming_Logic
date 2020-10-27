#include <stdio.h>
#include <stdlib.h>

typedef struct tproduto
{
  int codigo;
  float preco;
  int quant_estoque;
} tProduto;

tProduto LeProduto();
void TemProdutoEmEstoque(tProduto p);

int main()
{
  int qtd, i = 0, indice_maior, indice_menor;
  float maior = -100000000, menor = 10000000;
  scanf("%d", &qtd);
  tProduto *produtos;
  produtos = malloc(qtd * sizeof(tProduto));

  for( i ; i< qtd ; i++ )
  {
    produtos[i] = LeProduto();
  }
  i = 0;
  for ( i; i < qtd ; i++)
  {
    TemProdutoEmEstoque(produtos[i]);
    if(produtos[i].preco > maior){
      maior = produtos[i].preco;
      indice_maior = i;
    }
    if(produtos[i].preco < menor){
      menor = produtos[i].preco;
      indice_menor = i;
    }
  }
  printf("MAIOR:COD %d, PRE %.2f, QTD %d\n", produtos[indice_maior].codigo, produtos[indice_maior].preco, produtos[indice_maior].quant_estoque);
  printf("MENOR:COD %d, PRE %.2f, QTD %d\n", produtos[indice_menor].codigo, produtos[indice_menor].preco, produtos[indice_menor].quant_estoque);  
  free(produtos);
  return 0;
}

tProduto LeProduto()
{
  tProduto produtos;
  scanf("%d;%f;%d", &produtos.codigo, &produtos.preco, &produtos.quant_estoque);
  return produtos;
}

void TemProdutoEmEstoque(tProduto p)
{
  if (p.quant_estoque == 0){
    printf("FALTA:COD %d, PRE %.2f, QTD %d\n", p.codigo, p.preco, p.quant_estoque); 
  }
}