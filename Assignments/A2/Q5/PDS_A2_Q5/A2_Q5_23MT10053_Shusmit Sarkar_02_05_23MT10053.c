#include<stdio.h>
int main ()
{
  int a,b,c,d;
  printf("Enter the bottom left coordinates = ");//to enter new ordinate, press enter
  scanf("%d%d",&a,&b);
  printf("Enter the top right coordinates = ");
  scanf("%d%d",&c,&d);
  int L,B, area, perim;
  L = c-a;
  B = d-b;
  area = L*B;
  perim = 2*(L+B);
  printf("The area of rectangle is %d",area);
  printf("\n");
  printf("The perimeter of the rectangle %d",perim);
  float p,q;
  p = (a+c)/2.0;
  q = (b+d)/2.0;
  printf("\n");
  printf("The coordinates of the point of two diagonals is = %f %f\n",p,q);
  return 0;
}

  
