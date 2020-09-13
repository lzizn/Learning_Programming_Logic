#include <stdio.h>
int main () {
    float a,b,c,d;
    float valory,valorx,valorz;
    int marcadorpico=0,marcadorvale=0;
    int vale,pico;
    int inicio,fim;
    int x,y,z;
    scanf("%f %f %f %f %d %d",&a,&b,&c,&d,&inicio,&fim);
    x=inicio;
    y=x-1;
    z=x+1;
    while(inicio<=fim){
        valorx=(a*(x*(x*x)))+(b*(x*x))+(c*x)+d;
        valory=(a*(y*(y*y)))+(b*(y*y))+(c*y)+d;
        valorz=(a*(z*(z*z)))+(b*(z*z))+(c*z)+d;
        if(valorx>valory&&valorx>valorz){
            marcadorpico=1;
            pico=x;
            printf("Pico em x=%d\n",pico);
        }
        if(valorx<valory&&valorx<valorz){
            marcadorvale=1;
            vale=x;
            printf("Vale em x=%d\n",vale);
        }
        inicio++;
        x=inicio;
        y=x-1;
        z=x+1;
    }
    if(marcadorpico==0){
        printf("Nao ha pico\n");
    }
    if(marcadorvale==0){
        printf("Nao ha vale\n");
    }
}