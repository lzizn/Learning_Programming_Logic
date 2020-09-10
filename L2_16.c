#include <stdio.h>

int main(){
    int menor = 32000, valor1, valor2, aux = 0, primeira_contagem = 5000, segunda_contagem = 5000;
    char quebra;
    while (scanf("%d", &valor1)){
        if (valor1 < menor){
            menor = valor1;
        }
    }
    scanf("%c", &quebra);
    while (scanf("%d", &valor2)){
        if (valor2 == menor){
            if (primeira_contagem == 5000){
                primeira_contagem = aux;
            }
            else{
                segunda_contagem = aux;
            }
        }
        aux++;
    }
    if (primeira_contagem == 5000){
        if (segunda_contagem == 5000){
            printf("%i %i %i", menor, aux, aux);
        }
        else{
            printf("%i %i %i", menor, aux, segunda_contagem);
        }
    }
    else{
        if (segunda_contagem == 5000){
            printf("%i %i %i", menor, primeira_contagem, primeira_contagem);
        }
        else{
            printf("%i %i %i", menor, primeira_contagem, segunda_contagem);
        }
    }
    return 0;
}