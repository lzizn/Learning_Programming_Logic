#include <stdio.h>


float sacar(float valor, float saldo);
float depositar(float valor, float saldo);

float sacar(float valor, float saldo){
    return saldo-valor;
}

float depositar(float valor, float saldo){
    return saldo+valor;
}

int main(){
    float saldo, valor;
    int num_operacoes, i = 1;
    char operacao;
    scanf("%f %d", &saldo, &num_operacoes);
    for(i; i <= num_operacoes; i++){
        scanf(" %c %f", &operacao, &valor);
        if(operacao == 'S'){
            saldo = sacar(valor, saldo);
        }else{
            saldo = depositar(valor, saldo);
        }
    }
    if(saldo == 0){
        printf("Zerado: 0.00");
    }else if(saldo > 0){
        printf("Positivo: %.2f", saldo);
    }else{
        printf("Negativo: %.2f", saldo);
    }
    return 0;
}