#include <stdio.h>
#include <ctype.h>

void codificar(int m, int n){
	int i = 0;
	char a;
	if (m >= 26){
		m %= 26;
	}
	for(i = 0; i < 50; i++){
		scanf("%c", &a);
		if (a == ' '){
			if (i > 0){
		 		printf("%c", a);
			}
			else{
				continue;
			}
		}
		else if (a == '.'){
			printf("%c", a);
			break;
		}
		else if (islower(a)){
			a += m;
			if (a > 122){
				a -= 26;
			}
			printf("%c", a);
		}
		else{
			printf("%c", a);
		}
	}
}

void decodificar(int m, int n){
	int i = 0;
	char a;
	if (m > 26){
		m %= 26;
	}
	for(i = 0; i < 50; i++){
		scanf("%c", &a);
		if (a == ' '){
			if (i > 0){
		 		printf("%c", a);
			 }
			else{
				continue;
			}
		}
		else if (a == '.'){
			printf("%c", a);
			break;
		}
		else if (islower(a)){
			a -= m;
			if (a < 97){
				a += 26;
			}
			printf("%c", a);
		}
		else{
			printf("%c", a);
		}
	}
}

int main(){
	int n, m;
  	scanf("%i%i", &n, &m);
	if (m > 26) m = m % 26;
	if (n == 1){
		codificar(m, n);
	}
	else if (n == 2){
		decodificar(m, n);
	}
	else{
		printf("Operacao invalida.");
	}
  return 0;
}
