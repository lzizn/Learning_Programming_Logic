#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
  int dia;
  int mes;
  int ano;
} Data;

Data LerData();
void printaData(Data data);
void verificaBissexto(Data data);

int main()
{
  int qtd, i = 0;
  Data *data;
  scanf("%d", &qtd);
  data = malloc(qtd * sizeof(Data));

  for( i; i < qtd; i++ )
  {
    data[i] = LerData();
    printaData(data[i]);
    verificaBissexto(data[i]);
  }
  free(data);
  return 0;
}

Data LerData()
{
  Data data;
  scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
  return data;
}


void printaData(Data data){

  if(data.mes > 12){
    data.mes = 12;
  }else if(data.mes < 1){
    data.mes = 1;
  }


  if(data.dia > 30)
  {

   if(data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 || data.mes == 8 || data.mes == 10 || data.mes == 12)
   {
     data.dia = 31;
   }else if(data.mes == 2){
     data.dia = 28;
   }else{
     data.dia = 30;
   }

  }

  else if(data.dia < 1)
  {
    data.dia = 1;
  }
  if(data.mes < 10)
  {
    if(data.dia < 10)
    {
      printf("'0%d/0%d/%d':", data.dia, data.mes, data.ano);
    }else{
      printf("'%d/0%d/%d':", data.dia, data.mes, data.ano);
    }
  }
  else
  {
    if(data.dia < 10)
    {
      printf("'0%d/%d/%d':", data.dia, data.mes, data.ano);
    }else
    {
      printf("'%d/%d/%d':", data.dia, data.mes, data.ano);
    }
  }
}

void verificaBissexto(Data data)
{
  if((data.ano%4) == 0 || data.ano/100 == 0 || data.ano/400 == 0){
    printf("Bisexto\n");
  }else{
    printf("Normal\n");
  }
}