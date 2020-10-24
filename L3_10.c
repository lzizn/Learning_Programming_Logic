#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

char Codifica(char letra, int n);
char Decodifica (char letra, int n);
int EhLetra (char c) ;
int EhLetraMaiuscula (char c);
int EhLetraMinuscula (char c);

int main(){
  int chave, n, count = 0;
  char a;
  scanf("%d %d", &chave, &n);
  if(chave == 1 || chave == 2){
    if(n>=26){
      n %= 26;
    }
    while(scanf("%c", &a) == 1){
      if(count == 0){
        count++;
        continue;
      }
      if(a == '.'){
        printf(".");
        break;
      }
      if(EhLetra(a) == 0) {
        printf("%c", a);
        continue;
      }
      if(EhLetraMaiuscula(a) == 1){
        if(chave == 1){printf("%c", Codifica(a, 2*n));}
        else {printf("%c", Decodifica(a, 2*n));}
      }
      else if(EhLetraMinuscula(a) == 1){
        if(chave == 1){printf("%c", Codifica(a, n));}
        else {printf("%c", Decodifica(a, n));}
      }
    }
  }else{
    printf("Operacao invalida.");
  }
  return 0;
}

char Codifica(char letra, int n){
  if(letra >= 'A' && letra <= 'Z'){
    letra += n;
			if (letra > 'Z'){
				letra -= 26;
		}
  }else{
    letra += n;
			if (letra > 'z'){
				letra -= 26;
		}
  }
  return letra;
}
char Decodifica(char letra, int n){
  if(letra >= 'A' && letra <= 'Z'){
      letra -= n;
			if (letra < 'A'){
				letra += 26;
			}
  }else{
      letra -= n;
			if (letra < 'a'){
				letra += 26;
			}
  }
  return letra;
}

int EhLetra(char c){
  if ((c>='a' && c<='z')||(c>='A' && c<='Z')){
    return TRUE;
  }else{
    return FALSE;
  }
}

int EhLetraMaiuscula(char c){
  if (c>='A' && c<='Z'){
    return TRUE;
  }else{
    return FALSE;
  }
}

int EhLetraMinuscula(char c){
  if (c>='a' && c<='z'){
    return TRUE;
  }
  else{
    return FALSE;
  }
}