#include <stdio.h>

int main(){
	
	char a, anterior;
	int i = 0, cont = 0, mark = 0;
	printf("RESP:");
	for (i; i < 100; i++){
		scanf("%c", &a);
		if (a == '('){
			if (cont == 0){
				cont++;
				continue;
			}
			cont++;
		}
		if (a == ')'){
			cont--;
		}
		if (a == '.' && anterior == ')'){
			break;
		}
		if (cont > 0){
			printf("%c", a);
		}
		anterior = a;
	}
	return 0;
}
