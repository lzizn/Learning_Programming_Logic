#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
  int dia;
  int mes;
  int ano;
} Data;

void printaData(Data data);

int main()
{
  Data data[2];
  scanf("%d %d %d", &data[0].dia, &data[0].mes, &data[0].ano);
  scanf("%d %d %d", &data[1].dia, &data[1].mes, &data[1].ano);
  if(data[0].mes > 12){
    data[0].mes = 12;
  }else if(data[0].mes < 1){
    data[0].mes = 1;
  }
  if(data[0].dia > 30)
  {
   if(data[0].mes == 1 || data[0].mes == 3 || data[0].mes == 5 || data[0].mes == 7 || data[0].mes == 8 || data[0].mes == 10 || data[0].mes == 12)
   {
     data[0].dia = 31;
   }else if(data[0].mes == 2){
     data[0].dia = 28;
   }else{
     data[0].dia = 30;
   }
  }else if(data[0].dia < 1){
    data[0].dia = 1;
  }
  printaData(data[0]);
  while (1)
  {
    data[0].dia++;
    if(data[0].mes == 1 || data[0].mes == 3 || data[0].mes == 5 || data[0].mes == 7 || data[0].mes == 8 || data[0].mes == 10 || data[0].mes == 12){
      if(data[0].dia > 31)
      {
        data[0].dia = 1;
        data[0].mes++;
        if(data[0].mes > 12)
        {
          data[0].mes = 1;
          data[0].ano++;
        }
        if(data[0].dia == data[1].dia && data[0].mes == data[1].mes && data[0].ano == data[1].ano){
          break;
        }
        printaData(data[0]);

      }
      else
      {
        if(data[0].dia == data[1].dia && data[0].mes == data[1].mes && data[0].ano == data[1].ano){
          break;
        }
        printaData(data[0]);

      }
    }else if(data[0].mes == 2){
      if(data[0].dia > 28)
      {
        data[0].dia = 1;
        data[0].mes++;
        if(data[0].mes > 12)
        {
          data[0].mes = 1;
          data[0].ano++;
        }
        if(data[0].dia == data[1].dia && data[0].mes == data[1].mes && data[0].ano == data[1].ano){
          break;
        }
        printaData(data[0]);

      }
      else
      {
        if(data[0].dia == data[1].dia && data[0].mes == data[1].mes && data[0].ano == data[1].ano){
          break;
        }
        printaData(data[0]);

      }
    }else{
      if(data[0].dia > 30)
      {
        data[0].dia = 1;
        data[0].mes++;
        if(data[0].mes > 12)
        {
          data[0].mes = 1;
          data[0].ano++;
        }
        if(data[0].dia == data[1].dia && data[0].mes == data[1].mes && data[0].ano == data[1].ano){
          break;
        }
        printaData(data[0]);

      }
      else
      {
        if(data[0].dia == data[1].dia && data[0].mes == data[1].mes && data[0].ano == data[1].ano){
          break;
        }
        printaData(data[0]);
      }
    }
  }
  return 0;
}

void printaData(Data data){
  if(data.mes < 10)
  {
    if(data.dia < 10)
    {
      printf("'0%d/0%d/%d'\n", data.dia, data.mes, data.ano);
    }else{
      printf("'%d/0%d/%d'\n", data.dia, data.mes, data.ano);
    }
    
  }
  else
  {
    if(data.dia < 10)
    {
      printf("'0%d/%d/%d'\n", data.dia, data.mes, data.ano);
    }else
    {
      printf("'%d/%d/%d'\n", data.dia, data.mes, data.ano);
    }
  }
}