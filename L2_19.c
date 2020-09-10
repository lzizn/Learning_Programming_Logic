#include <stdio.h>
#include <math.h>

int main(){
	float y, a, b, c, d;
	double yant, ypost;
	int x, e, f, posp, posv, contp = 0, contv = 0, ultyp = -100000, ultyv = 100000;
	scanf("%f %f %f %f %i %i", &a, &b, &c, &d, &e, &f);
	for(x = e; x <= f; x++){
		yant = round(((a*(pow((x-1),3))) + (b*(pow((x-1),2))) + (c*(x-1)) + d));
		ypost = round(((a*(pow((x+1),3))) + (b*(pow((x+1),2))) + (c*(x+1)) + d));
		y = round(((a*(pow(x,3))) + (b*(pow(x,2))) + (c*x) + d));
		if (yant == ypost){
			if (y > yant){
				if (y > ultyp){
					ultyp = y;
					posp = x;
					contp++;
				}
			}else if (y <= yant){
				if (y < ultyv){
					ultyv = y;
					posv = x;
					contv++;
				}
			}
		}
		printf("\n%i\n=yant: %lf\n===y: %f\n=ypos: %lf\n", x, yant, y, ypost);
	}
	if ((contp == 0) && (contv == 0)) printf("Nao ha pico\nNao ha vale");
	else if (contp == 0 || contv == 0){
		if (contv == 0) printf("Pico em x=%i\nNao ha vale", posp);
		else printf("Vale em x=%i\nNao ha pico", posv);
	}
	else{
		if (posp < posv){
			printf("Pico em x=%i\nVale em x=%i", posp, posv);
		}else{
			printf("Vale em x=%i\nPico em x=%i\n", posv, posp);
		}
		
	}
	return 0;
}
