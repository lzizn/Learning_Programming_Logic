#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);

float delta(float a, float b, float c){
    float delta = ((b*b) - (4*a*c));
    if ( delta < 0 ){
        printf("Nao ha raizes reais");
        return 0;
    }else if( delta == 0 ){
        float x1 = (((b*-1))/(2*a));
        printf("x1: %.2f x2: %.2f", x1, x1);
        return 0;
    }
    else{
        float x1 = (((b*-1) + sqrt(delta))/(2*a));
        float x2 = (((b*-1) - sqrt(delta))/(2*a));
        printf("x1: %.2f x2: %.2f", x1, x2);
        return 0;
    }
}

int main(){
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    delta(a, b, c);
    return 0;
}