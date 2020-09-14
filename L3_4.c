#include <stdio.h>

int  comeco, fim;

void ImprimeMultiplos(int num){
    int j = comeco+1;
    int contador = 0;
    for(j; j < fim; j++){
        if (j % num == 0 && num != j){
            printf("%d ", j);
            contador++;
        }
    }
    if (contador == 0){
        printf("*");
    }
    printf("\n");
}

void EhPrimo(int num){
    int contador = 0;
    int j = 1;
    for(j; j <= num; j++){
        if (num % j == 0){
            contador++;
        }
    }
    if (contador == 2){
        printf("%d\n", num);
        ImprimeMultiplos(num);
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