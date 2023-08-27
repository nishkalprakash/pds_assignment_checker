//ROLL NO:23ME10063
//NAME:Prem Pastagia
#include <stdio.h>
int main()
{
  int a,b,c,d,area,permi;
  float p,q;
  printf("enter the cordinate of the  bottom-left corner of rectangle (in x,y)\n");
  scanf("%d,%d",&a,&b);
  printf("enter the cordinate of the  top-right corner of rectangle (in x,y)\n");
  scanf("%d,%d",&c,&d);
  area=((c-a)*(d-b));
  permi=2*((c-a)+(d-b));
  printf("The area of rectangle is %d and perimeter is %d\n",area ,permi);
  p=(float)(c+a)/2;
  q=(float)(b+d)/2;
  printf("The point of intersection of two diagonals is (%f,%f)\n",p,q);

  return 0;
}
