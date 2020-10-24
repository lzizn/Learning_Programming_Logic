#include <stdio.h>
#include <stdlib.h>

int area(int x1, int y1, int x2, int y2){
  int lado, altura;
  if (x1 < 0 || x2 < 0){
    x1 = abs(x1);
    x2 = abs(x2);
    lado = x1+x2;
  }else{
    lado = x2-x1;
  }
  if (y1 < 0 || y2 < 0){
    y1 = abs(y1);
    y2 = abs(y2);
    altura = y1+y2;
  }else{
    altura = y2-y1;
  }

  return lado*altura;
}

int main(){
    int r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1, r2_x2, r2_y2;
    int area1 = 0, area2 = 0, dif = 0;
    scanf("%d%d%d%d%d%d%d%d", &r1_x1, &r1_y1, &r1_x2, &r1_y2, &r2_x1, &r2_y1, &r2_x2, &r2_y2);
    if(r1_x1 >= r2_x1 || r1_x2 >= r2_x1){
      area1 = area(r1_x1, r1_y1, r1_x2, r1_y2);
      area2 = area(r2_x1, r2_y1, r2_x2, r2_y2);
      dif = area(r1_x2, r1_y2, r2_x1, r2_y1);
      // printf("opaii");
      area1 = area1+area2;
      printf("RESP:%d", area1-dif);
      return 0;
    }else{
      area1 = area(r1_x1, r1_y1, r1_x2, r1_y2);
      area2 = area(r2_x1, r2_y1, r2_x2, r2_y2);
      printf("RESP:%d", area1+area2);
    }
    return 0;
}