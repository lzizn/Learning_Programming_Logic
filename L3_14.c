#include <stdio.h>

void fatora(int n);
void fib (int n);

void fib(int n){
    int j = 0, seq, i = 1, i_anterior = 1, aux;
    for(j; j < n; j++)
    {
        seq = i+i_anterior;
        aux = i;
        i += i_anterior;
        i_anterior = aux;
        fatora(seq);
    }
}
void fatora(int n)
{
  int i = 2, count = 1, cont_prints = 1;
  printf("%d:", n);
  while(i <= n)
  {
    if(n%i == 0)
    {
      count++;
      n /= i;
      if(n == 1)
      {
        printf(" (%d, %d)", i, count-1); 
        cont_prints++;
        break;
      }
      else
      {
        continue;
      }
    }
    else
    {
      if(count != 1)
      {
        printf(" (%d, %d)", i, count-1);
        cont_prints++;
      }
      i++;
      count = 1;
    }
  }
  if(cont_prints == 1){
    printf(" (%d, %d)", i-1, count);
    cont_prints++;
  }
  printf(" [%d]\n", cont_prints-1);
}

int main(){
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("Nao ha fatores primos.");
        return 0;
    }
    else if( n > 1 && n <= 40 ){
        fib(n);
    }
    return 0;
}