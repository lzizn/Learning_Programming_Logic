//exercicio nao finalizado
#include <stdio.h>
#include <string.h>

int main(){
    int breaker = 0, quantidade_numeros, i = 0;
    char frase[200];
    scanf("%d", &quantidade_numeros);
    int numeros[quantidade_numeros];
    for(i; i < quantidade_numeros; i++){
        scanf("%d", &numeros[i]);
    }
    int k = 2;
    for(k; breaker < 2; k++){
        scanf("%c", &frase[k]);
        if (frase[k-1] == '%'){
            int j = 0;
            for(j; j < quantidade_numeros; j++){
                if (frase[k] == j+1){
                    frase[k] = numeros[j];
                }
            }
        }
        if (frase[k] > quantidade_numeros || frase[k] < '1'){
            frase[k] = 'E';
            frase[k+1] = 'R';
            frase[k+2] = 'R';
            frase[k+3] = 'O';
        }
        if (frase[k] == '"'){
            breaker++;
        }
        printf("%c", frase[k]);
    }
    return 0;
}