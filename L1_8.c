#include <stdio.h>

int main(){

  char A;
  A = getchar();

  if (A == 'a' || A == 'e'|| A == 'i'|| A == 'o'|| A == 'u'|| A == 'A'|| A == 'E'|| A == 'I'|| A == 'O'|| A == 'U')
  {
    printf("Vogal");

  }
  else{
    printf("Nao vogal");
  }
}
