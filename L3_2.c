//exericicio incompleto;
#include <stdio.h>

float Soma(float A, float B){
    B = A+B;
	return B;
}

float Subtracao(float A, float B){
    B = A-B;
	return B;
}
	
float Divisao(float A, float B){
    B = A/B;
	return B;
}

float Multiplicacao(float A, float B){
    B = A*B;
	return B;
}

int main(){
    char o = ' ', s = ' ';
    float A, B;
    int contador = 0, breaker = 0;
    while (breaker == 0){
        if (contador == 0){
            scanf("%f", &A);
            scanf("%c", &s);
            scanf("%f", &B);
            scanf("%c", &s);
            scanf("%c", &o);
            contador++;
        }
        else{
            scanf("%f", &A);
            scanf("%c", &s);
            scanf("%c", &o);          
        }
        switch (o){
            case '+':
            Soma(A, B);
            break;

            case '-':
            Subtracao(A, B);
            break;

            case '*':
            Multiplicacao(A, B);
            break;

            case '/':
            Divisao(A, B);
            break;
        }
    }
    printf("%.2f", B);
    return 0;
}