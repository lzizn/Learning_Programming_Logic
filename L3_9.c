#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int verificapH(float pH);
int verificaGotaChuvaAcida(float pH);
float porcentagem(float total, float valor);
void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal);

int main(){
  int area, densidade, tempo, i, resultado;
  int aux_basico = 0, aux_neutro = 0, aux_acido = 0, aux_chuvaacida = 0;
  float aux, mais_neutro, auxmenor = 15, menos_acido = 0, mais_acido = 15;
  float ph,porcentagem_chuva_acida,porcent_normal;

  scanf("%d %d %d",&area,&densidade,&tempo);

  resultado = area*densidade*tempo;

  if( resultado == 0 )
  {

    printf("Nenhuma gota foi avaliada");
    return 0;

  }
  for( i = 0 ; i < resultado ; i++ )
  {

    scanf("%f",&ph);

    if ( verificaGotaChuvaAcida(ph) ) {aux_chuvaacida++;}
    if ( verificapH(ph ) == 0) {aux_neutro++;}
    else if(verificapH(ph) == 1) {aux_acido++;}
    else if(verificapH(ph) == 2) {aux_basico++;}

    if(ph > menos_acido) {menos_acido = ph;}
    if(ph < mais_acido) {mais_acido = ph;}

    aux = (ph - 7.00);

    if(aux < 0) {aux *= -1;}
    if(aux < auxmenor)
    {

      auxmenor = aux;
      mais_neutro = ph;

    }

  }

  porcentagem_chuva_acida = porcentagem(resultado, aux_chuvaacida);
  porcent_normal = 100.00 - porcentagem_chuva_acida;

  printf("%d %d %d %.2f %.2f %.2f\n", aux_acido, aux_basico, aux_neutro, mais_acido,menos_acido,mais_neutro);
  
  imprimeResultadosAnalise(porcentagem_chuva_acida,porcent_normal);
  
  return 0;
}

int verificapH(float pH)
{

  if(pH == 7) {return 0;}
  else if(pH < 7) {return 1;}
  else {return 2;}

}

int verificaGotaChuvaAcida(float pH)
{

  if(pH < 5.7){ return(TRUE);}
  else{return(FALSE);}

}

float porcentagem(float total, float valor)
{

  float porcentagem;
  porcentagem = (valor/total)*100;
  return (porcentagem);

}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal)
{
  if(porcentagemGotasChuvaAcida >= 75.00) {printf("Chuva Acida ");}
  else if(porcentagemGotasChuvaNormal >= 75.00) {printf("Chuva Normal ");}
  else {printf("Chuva com indicios de chuva acida ");}

  printf("%.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);

}