#include<stdio.h>
int main()
{
  int a;
  int b ;
  int c;
  int d;
  int  area ;
  int perim ;
  float  Ptofintersection1;
    float Ptofintersection2 ;
  
  printf("The coordinates of bottom left corner is ");
    scanf("%d%d",&a,&b);
  printf("The coordinates of the top right corner is ");
  scanf("%d%d",&c,&d);
  area= (c-a)*(d-b) ;
  perim = 2*((c-a)+(d-b)) ;
  
  printf("The area of the rectangle is%d\n ",area);
  printf("The perimeter of the rectangle is%d\n ", perim);

  Ptofintersection1 =((a+c)/2.0);
  Ptofintersection2 =((b+d)/2.0);
  printf("The point of intersection of the two diagonals is %f %f ", Ptofintersection1,Ptofintersection2);
  return 0 ;
}
  
