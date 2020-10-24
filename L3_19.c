#include <stdio.h>

float tempoChegada(float distancia, float velocidade);

float tempoChegada(float distancia, float velocidade){
    return (distancia/velocidade);
}

int main(){
    int num_cidades, i = 1;
    float dist, menor_dist = 10001, velocidade;
    char cidade, cidade_menor_distancia;
    scanf("%d ", &num_cidades);

    for( i; i<= num_cidades; i++ ){
        scanf(" %c %f", &cidade, &dist);
        if(dist < menor_dist){
            menor_dist = dist;
            cidade_menor_distancia = cidade;
        }
        // printf("char:%c distanci:%f\n", cidade, dist);
    }
    scanf("%f", &velocidade);
    float tempo = tempoChegada(menor_dist, velocidade);
    printf("c: %c d: %.2f t: %.2f", cidade_menor_distancia, menor_dist, tempo);
    return 0;
}