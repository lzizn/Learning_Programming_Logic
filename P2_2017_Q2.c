#include <stdio.h>

int contador = 0;

int EhIgual(int a, int b){
    if(a == b){
        contador++;
    }
}

int InverteNumero(int num){
    int ret=0;
    int i=1;

    while(i<=num)
    {
        ret*=10;
        ret+=(num%(i*10)-num%i)/i;
        i*=10;
    }
    EhIgual(ret, num);
    return 1; 
}

int main(){
    int breaker = 0, i = 0, numeros[100], numeros_invertidos[100]; 
    while (scanf("%d", &numeros[i])){
        InverteNumero(numeros[i]);
        i++;
    }
    printf("COUNT:%d", contador);
    return 0;
}