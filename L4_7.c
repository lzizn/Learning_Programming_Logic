#include <stdio.h>
#include <stdlib.h>

typedef struct tpontos{
  int x1;
  int y1;
  int x2;
  int y2;
} tReta;


int main(){
  tReta reta;
  int n, i = 1;
  scanf("%d", &n);
  for ( i; i <= n; i++){
    scanf("%d %d %d %d", &reta.x1, &reta.y1, &reta.x2, &reta.y2);
    if (reta.x1 == 0 || reta.x2 == 0 || reta.y1 == 0 || reta.y2 == 0){
      printf("DIFERENTE\n");
      continue;
    }
    if(reta.x1 > 0 && reta.x2 > 0 && reta.y1 > 0 && reta.y2 > 0){
      printf("MESMO\n");
    }else if(reta.x1 < 0 && reta.x2 < 0 && reta.y1 > 0 && reta.y2 > 0){
      printf("MESMO\n");
    }else if(reta.x1 < 0 && reta.x2 < 0 && reta.y1 < 0 && reta.y2 < 0){
      printf("MESMO\n");
    }else if(reta.x1 > 0 && reta.x2 > 0 && reta.y1 < 0 && reta.y2 < 0){
      printf("MESMO\n");
    }else{
      printf("DIFERENTE\n");
    }
  }
  return 0;
}