#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("enter the coordinate of bottom-left corner of rectangle: ");     //a,b are the coordinates of bottom-left corner of rectangle. 
  scanf("%d%d",&a,&b);
  printf("enter the coordinate of top-right corner of rectangle: ");       //c,d are the coordinates of top right corner of rectangle.
  scanf("%d%d",&c,&d);
  printf("area=%d\n",(c-a)*(d-b));
  printf("perim=%d\n",2*(c-a)+2*(d-b));
  float p,q;
  printf("point of intersection of two diagonals");      
  p=(float)(a+c)/2;
  q=(float)(b+d)/2;
  printf("intersection of two diagonals are (%f,%f)", p,q);
  
    return 0;
    }
  
  
