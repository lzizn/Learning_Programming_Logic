#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularDistancia(int x, int y);

int main(){
    int i = 1, x = 0, y = 0, highest_x = 0, highest_y = 0;
    float distance = 0, highestDistance = 0;
    for(i; i <= 5; i++){
        scanf("%d%d", &x, &y);
        distance = calcularDistancia(x, y);
        printf("%.2f ", distance);
        if(distance > highestDistance)
        {
            highestDistance = distance;
            highest_x = x;
            highest_y = y;
        }
    }
    printf("Maior: %.2f p: (%d, %d)", highestDistance, highest_x, highest_y);
    return 0;
}

float calcularDistancia(int x, int y){
    float distance = 0;
    x = abs(x), y = abs(y);
    x *= x; y *= y;
    distance = sqrt(x+y);
    return distance;
}