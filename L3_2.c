//juagod ajudou pra caramba nesse aqui, as always pq o cara é brabo
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
    char o, s;
    float A, B;
    scanf("%f", &A);

    while (scanf("%f %c", &B, &o) ){
        s = 0;
        scanf("%c", &s);
        if (o == 43) {
            A = Soma(A, B);
        }
        else if (o == 45) {
            A = Subtracao(A, B);
        }
        else if (o == 47) {
            A = Divisao(A, B);
        }
        else if (o == 42) {
            A = Multiplicacao(A, B);
        }
        if (s != 32) {
            break;
        }
    }
    printf("%.2f", A);
    return 0;
}