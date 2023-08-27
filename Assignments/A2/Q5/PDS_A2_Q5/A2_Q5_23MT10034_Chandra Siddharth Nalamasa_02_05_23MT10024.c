//Roll No.:<23MT10034>
//Name:<N Chandra Siddharth>
#include<stdio.h>
int main ()
{
  int a,b,c,d ;
  scanf(" THe coordinates of to the bottom left corner of rectangle %d%d",&a,&b);
  scanf("The coordinates of to the top right corner of the rectangle %d%d",&c,&d);
 int area=(d-b)*(c-a) , perim=2*(d+c-a-b);
  printf("The value of area \n %d, the value of perim\n %d",area,perim);
  float p,q;
  p=(float)(a+c)/2,q=(float)(b+d)/2;
  printf("%f%f",p,q);
  return 0;
}
  
