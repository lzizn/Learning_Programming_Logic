#include <stdio.h>

int main(){

  int m;
  scanf("%d",&m);
  if (m == 1){
    printf("Jan.");
  }
  else if(m == 2){
    printf("Fev.");
  }
  else if(m == 3){
    printf("Mar.");
  }
  else if(m == 4){
    printf("Abr.");
  }
  else if(m == 5){
    printf("Mai.");
  }
  else if(m == 6){
    printf("Jun.");
  }
  else if(m == 7){
    printf("Jul.");
  }
  else if(m == 8){
    printf("Ago.");
  }
  else if(m == 9){
    printf("Set.");
  }
  else if(m == 10){
    printf("Out.");
  }
  else if(m == 11){
    printf("Nov.");
  }
  else if(m == 12){
    printf("Dez.");
  }
  else{
    printf("Invalido.");
  }
  return 0;
}
