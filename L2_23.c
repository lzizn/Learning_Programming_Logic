#include <iostream>

int main(){
	char a;
	int i, cont = 0;
	//printf("RESP:");
	for (i = 0; i < 100; i++){
		cin >> a;
		if ((a == '(')&& (cont == 0)){
			cont++;
			continue;
		}
		else if (cont > 0 && (a != '.')){
			//printf("%c", a);
			cout << a;
		}
		else{
			break;
		}
	}
	return 0;
}
