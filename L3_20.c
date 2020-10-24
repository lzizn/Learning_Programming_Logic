#include <stdio.h>

#define PI 3.141592

float areaCirculo(float raio);
float volumeCaixa(float raio, float altura);

float volumeCaixa(float raio, float altura){
    return ((raio*raio)*PI);
}

float volumeCaixa(float area, float altura){
    return area*altura;
}

int main(){
    float num_casas, raio_base, altura, caixas_por_dia, dias, area, volume, total;
    scanf("%f %f %f %f %f", &num_casas, &raio_base, &altura, &caixas_por_dia, &dias);
    area = areaCirculo(raio_base);
    volume = volumeCaixa(area, altura);
    total = dias*volume*num_casas*caixas_por_dia;
    printf("Resp: %.2f L", total);
}