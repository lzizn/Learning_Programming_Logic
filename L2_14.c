#include <stdio.h>

int main(void) {
  char entrada;
  scanf("%c",&entrada);
  printf("RESP:%c",entrada);
  while(entrada!='.' && entrada!='!' && entrada!='?'){
    scanf("%c",&entrada);
    if(entrada == ' '){
    }else{
      printf("%c",entrada);
    }
  }
  return 0;
}
