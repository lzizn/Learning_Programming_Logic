#include <stdio.h>

#define TRUE 1
#define FALSE 0

int ehLetra(char c);

int ehLetra(char c){
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c<='Z')){
        return TRUE;
    }else{
        return FALSE;
    }
}

int main(){
    int count = 0;
    char a;
    while(1){
        scanf("%c", &a);
        if(a == '.'){
            break;
        }else{
            if(ehLetra(a) == 1){
                count++;
            }else{
                continue;
            }
        }
    }
    printf("RESP: %d", count);
    return 0;
}