#include <stdio.h>

int main(){
    int contador_aspas = 0, breaker = 0, quantidade_numeros, i = 1, j;
    char Caractere, Caractere_anterior;
    scanf("%d", &quantidade_numeros);
    int numeros[quantidade_numeros+1];
    numeros[0] = 0;
    for(i; i < quantidade_numeros+1; i++){
        scanf("%d", &numeros[i]);
    }
    while(breaker == 0){
        scanf("%c", &Caractere);
        if (Caractere_anterior == '%'){
            if (Caractere >= 48 && Caractere <= 57){
                j = Caractere-48;
                if (j > quantidade_numeros || j < 1){
                    printf("ERRO");
                    Caractere_anterior = 'a';
                    continue;
                }
                printf("%d", numeros[j]);
		    }
            Caractere_anterior = 'a';
        }else{
            if (Caractere == 34){
                contador_aspas++;
                if (contador_aspas == 2)
                {
                    break;
                }
                continue;
            }else{
                if (Caractere == '%'){
                    Caractere_anterior = '%';
                    continue;
                }else{
                    printf("%c", Caractere);
                }
            }
        }
    }
    return 0;
}
