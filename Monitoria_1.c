#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


int verificaChar(char letra, int i){
  if(i <= 3){
    if ((letra >= 'a' && letra <= 'z')||(letra >= 'A' && letra <= 'Z')){
      return TRUE;
    }else{
      return FALSE;
    }
  }else{
    if ((letra >= 'a' && letra <= 'z')||(letra >= 'A' && letra <= 'Z')){
      return FALSE;
    }else{
      return TRUE;
    }
  }
}
int main()
{
  int i = 1, char_error = 0, num_error = 0;
  char a;
  for(i; i <= 8; i++){
    scanf("%1c", &a);
    if(i == 4){ continue; }
    if((verificaChar(a, i) == 0 && i <= 3)){
      char_error++;
      continue;
    }else if((verificaChar(a, i) == 0 && i > 3)){
      num_error++;
      continue;
    }
  }
  if (num_error == 1 && char_error == 1) { printf("Codigo invalido!Problema nas letras e nos numeros!"); }
  else if(char_error == 1 || num_error  == 1){
    if(char_error == 1){
      printf("Codigo invalido!Problema nas letras!");
    }else{
      printf("Codigo invalido!Problema nos numeros!");
    }
  }else{
    printf("Codigo valido!");
  }
  return 0;
}