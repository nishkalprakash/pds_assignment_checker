#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf( "write value of a,b,c,d");
  scanf("%d%d",&a,&b);
  scanf("%d%d",&c,&d);
  int area;
  int perim;
  float p,q;
  printf(" the area of rectangle is %d and perimeter is %d\n",area=(d-b)*(c-a), perim=2*((d-b)+(c-a)));
  printf("the point of intersection of diagonals is %f,%f\n",p= (a+c)/2, q=(b+d)/2);
  return 0;
}
  
  
