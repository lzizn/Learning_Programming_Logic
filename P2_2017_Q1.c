#include <stdio.h>

int main(){
    int i = 1, quantidade, n, menor = 10000, posicao;
    scanf("%d", &quantidade);
    if(quantidade>0){
        for (i; i <= quantidade; i++){
            scanf("%d", &n);
            if (menor > n){
                posicao = i;
                menor = n;
            }
        }
        printf("POS:%d", posicao);
    }
    return 0;
}