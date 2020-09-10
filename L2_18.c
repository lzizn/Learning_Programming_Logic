#include <stdio.h>


int main(){
	int i, j, L, C, maior = -32767, posL, posC;
	scanf("%i%i", &L, &C);
	int v[100][100];
	for(i = 0; i < L; i++){
		for (j = 0; j < C; j++){
			scanf("%i", &v[i][j]);
			if (v[i][j] > maior){
				maior = v[i][j];
				posL = i; posC = j;
			}
		}
	}
	printf("%i (%i, %i)", maior, posL+1, posC+1);
}
