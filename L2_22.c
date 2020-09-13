#include <stdio.h>

int main(){
    int n, x, soma, breaker = 0;
    scanf("%d", &n);
    while (n >= 10){
        n = (n%10) + (n/10);
    }
    printf("RESP:%d", n);
    return 0;
}