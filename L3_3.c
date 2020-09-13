#include <stdio.h>

int  comeco, fim;

void EhPrimo(int num){
    int contador = 0;
    int j = 1;
    for(j; j <= num; j++){
        if (num % j == 0){
            contador++;
        }
    }
    if (contador == 2){
        printf("%d ", num);
    }
}

int main(){
    scanf("%d %d", &comeco, &fim);
    int i = comeco+1;
    for(i; i < fim; i++){
        EhPrimo(i);
    }
    return 0;
}