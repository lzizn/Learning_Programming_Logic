#include <stdio.h>
#include <ctype.h>

int main(){
    int i = 0, cont = 0;
    char space, palavra1[2], palavra2[2];
    char letra;
    scanf("%c%c %c%c", &palavra1[0], &palavra1[1], &palavra2[0], &palavra2[1]);
    for (i; i < 2; i++){
        if (isalnum(palavra1[i]) && isalnum(palavra2[i])){
            if (toupper(palavra1[i]) == toupper(palavra2[i])){
                cont++;
            }
            else{
                printf("DIFERENTES");
                break;
            }
        }
        else{
            printf("Invalido");
            break;
        }
    }
    if (cont == 2){
        printf("IGUAIS");
    }
    return 0;
}