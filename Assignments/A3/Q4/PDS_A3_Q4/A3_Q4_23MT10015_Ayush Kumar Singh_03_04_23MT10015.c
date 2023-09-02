// NAME: AYUSH KUMAR SINGH
// Roll No.: 23Mt10015

#include <stdio.h>
#include <math.h>
int main(){
  int a,b,c,d;
  printf("Coordinate of bottom-left corner a,b = ");
  scanf("%d,%d", &a,&b);
  printf("Coordinate of top-right corner c,d = ");
  scanf("%d,%d", &c,&d);
  int x,y;
  if(c<a || d<b || (a==c && d==b)){
    printf("Ill formed rectangle\n");
    return 0;
  }
  printf("Coordinate of point P x,y = ");
  scanf("%d,%d", &x,&y);

  if(x==a && y==b){
    printf("P(%d,%d) lies on Bottom-Left corner\n", x,y);
    return 0;
  }else if (x==a && y==d){
    printf("P(%d,%d) lies on Top-Left corner\n", x,y);
    return 0;
  }else if (x==c && y==d){
    printf("P(%d,%d) lies on Top-Right corner\n", x,y);
    return 0;
  }else if (x==c && y==b){
    printf("P(%d,%d) lies on Bottom-Right corner\n", x,y);
    return 0;
  }  if(y==b && a<x<c){
    printf("P(%d,%d) lies on Bottom side\n", x,y);
  }else if(y==d && a<x<c){
    printf("P(%d,%d) lies on Top side\n", x,y);
  }else if(x==a && b<y<d){
    printf("P(%d,%d) lies on Left side\n", x,y);
  }else if(x==c && b<y<d){
    printf("P(%d,%d) lies on Right side\n", x,y);
  } else {
    printf("P(%d,%d) lies outside the Rectangle\n", x,y);
  }
  return 0;
}
