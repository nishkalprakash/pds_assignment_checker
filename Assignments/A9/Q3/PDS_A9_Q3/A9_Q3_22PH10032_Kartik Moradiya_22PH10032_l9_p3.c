#include<stdio.h>

 typedef struct rectangle{
  int x;
  int y;
 }point;
 
 
 void area(point p1, point p2);
 int main()
 {
 point p1;
 point p2;
 printf("enter top left point 1:");
  scanf("%d",&p1.x);
  scanf("%d",&p1.y);
 printf("enter bottom right point 1:");
  scanf("%d",&p2.x);
  scanf("%d",&p2.y);
 area(p1,p2);
 return 0;
 }

 
 void area(point p1,point p2){
  int area = (((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y)))/2;
  printf("area =%d",area);
 }
