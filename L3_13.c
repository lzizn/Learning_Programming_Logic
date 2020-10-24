#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int CalculaValorPalavra(char palavra[50]);
int EhPrimo(int n);
int ProximoPrimo(int n); 

int main(){
    char palavra[200];
    int result = 0, n = 0;
    while(scanf("%s", &palavra) == 1)
    {
        n = CalculaValorPalavra(palavra);
        result = EhPrimo(n);
        if(result == 1){
            printf("E primo\n");
            continue;
        }
        else{
            printf("Nao e primo %i\n", ProximoPrimo(n));
            continue;
        }
    }
    return 0;
}

int CalculaValorPalavra(char palavra[200])
{
    int count = 0;
    int i = 0;
    for(i; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'A' && palavra[i]<='Z'){
            count = count+(palavra[i]-38);
        }else if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            count = count+(palavra[i]-96);
        }
    }
    return count;
}

int EhPrimo(int n)
{
    int i = 1;
    int count = 0;
    for(i; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if(count == 2){
        return TRUE;
    }else{
        return FALSE;
    }
}

int ProximoPrimo(int n)
{
    int i = n+1;
    while(1)
    {
        if(EhPrimo(i) == 1){
            return i;
        }else{
            i++;
            continue;
        }
    }
}