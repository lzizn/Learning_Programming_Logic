#include <stdio.h>

void verificarSoma(int soma){
  if (soma > 100){
    soma %= 100;
    soma /= 10;
    printf("RESP:%d", soma);
  }
  else if (soma < 10){
      printf("RESP:0");
  }
  else{
    soma /= 10;
    printf("RESP:%d", soma);
  }

}

int main(void) {
  int h1, h2, m1, m2, s1, s2, soma;
  scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
  if(h1 > h2){
    soma = h1+m1+s1;
    verificarSoma(soma);
  }
  else if(h2 > h1){
    soma = h2+m2+s2;
    verificarSoma(soma);
  }
  else{
    if (m1 > m2){
      soma = h1+m1+s1;
      verificarSoma(soma);
    }
    else if(m2 > m1){
      soma = h2+m2+s2;
      verificarSoma(soma);
    }
    else{
      if (s1 > s2){
        soma = h1+m1+s1;
        verificarSoma(soma);
      }
      else if (s2 > s1){
        soma = h2+m2+s1;
        verificarSoma(soma);
      }
      else{
        printf("IGUAIS");
      }
    }
  }
}
