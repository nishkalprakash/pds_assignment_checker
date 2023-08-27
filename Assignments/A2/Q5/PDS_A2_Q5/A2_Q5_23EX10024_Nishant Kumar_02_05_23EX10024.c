//Roll No. 23EX10024
//Name Nishant Kumar
#include<stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  printf("Enter the coordinates of bottom left corner\n");
  scanf("%d %d",&a,&b);
  printf("Enter the coordinates of top right corner\n");
  scanf("%d %d",&c,&d);
  area = (d-b)*(c-a);
  perim = 2*( (d-b) + (c-a) );
  printf("The area and perimeter of rectangle is %d and %d\n", area,perim);
  p = (a+c)/2.0;
  q = (b+d)/2.0;
  printf("The coordinates of intersection of diagonals are %f and %f\n", p,q);
  return 0;
}
  
  
  
