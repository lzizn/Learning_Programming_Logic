#include <stdio.h>

void fatora(int n);
void fib (int n);
int EhPrimo(int n);

int EhPrimo(int n)
{
    int i = 1;
    int count = 0;
    for(i; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if(count == 2){
        return 1;
    }else{
        return 0;
    }
}

void fib(int n){
    int j = 0, seq[40], i = 1, i_anterior, aux;
    for(j; j < n+1; j++){
        if(j == 0) {
            i_anterior = i;
            continue;
        }
        seq[j] = i+i_anterior;
        aux = i;
        i += i_anterior;
        i_anterior = aux;
        fatora(seq[j]);
    }
}
void fatora(int n){
    int i = 1, count = 0, cont_prints = 1;
    for(i; i <= n; i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("%d: (%d, 1) [1]\n", n, n);
    }else{
        printf("%d:", n);
        i = 2, count = 1;
        while(i < n)
        {
            if (n%i == 0)
            {
                count++;
                n /= i; 
            }
            else
            {
                cont_prints++;
                printf(" (%d, %d) ", i, count);
                count = 0;
                while(1)
                {
                    if(EhPrimo(i) == 1){
                        break;
                    }else{
                        i++;
                    }
                }
            }
        }
        if(cont_prints == 1){
            printf(" (%d, %d) ", i, count);
            cont_prints++;
        }
        printf("[%d]\n", cont_prints);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if( n > 0 && n <= 40 ){
        fib(n);
    }
    return 0;
}