//exercicio nao finalizado
#include <stdio.h>
#include <ctype.h>

int main(){
    int jumanji, contador_aspas = 0, breaker = 0, quantidade_numeros, i = 0;
    char Caractere, Caractere_anterior;
    scanf("%d", &quantidade_numeros);
    char numeros[quantidade_numeros];
    for(i; i < quantidade_numeros; i++){
        scanf("%c", &numeros[i]);
    }
    while(breaker == 0){
        scanf("%c", &Caractere);
        if (Caractere == 34){
            contador_aspas++;
            if (contador_aspas == 2){
                break;
            }
            continue;
        }
        if (Caractere == '%'){
            Caractere_anterior = '%';
            continue;
            
        }else if(Caractere_anterior == '%'){
            int i = 0;
            for(i; i < quantidade_numeros; i++){
                if (Caractere == i+1){
                    Caractere = numeros[i+1];
                }
            }
            printf("%c", Caractere);
            Caractere_anterior = 'a';
        }
        else{
            printf("%c", Caractere);
        }
    }
    return 0;
}