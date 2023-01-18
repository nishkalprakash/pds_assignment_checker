#include<stdio.h>
#include<math.h>
 typedef struct circle{
 int x;
 int y;
 float r;
 }circle;
 
  int intersect(circle c1, circle c2);
 int main()
 {
  circle c1;
  circle c2;
  printf("enter the x, y ,r:");
  scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
  scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
  intersect(c1,c2);
 return 0;
 }
 int intersect(circle c1, circle c2){
 int radius = c1.r +c2.r;
 int a=c1.x-c2.x;
 int b=c1.y-c2.y;
 int d=sqrt(a*a + b*b);
 if(d>radius){
 printf("don't intersect");
 }
 else{
 printf(" intersect");
 } ;
 }
