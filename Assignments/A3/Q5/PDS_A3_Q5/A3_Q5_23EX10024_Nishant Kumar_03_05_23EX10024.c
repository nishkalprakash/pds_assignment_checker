//Roll No. 23EX10024
//Name Nishant Kumar
#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  int g,h,i,j,k;
  printf("Enter coefficient of x^0\n");
  scanf("%d",&f);
  printf("Enter coefficient of x^1\n");
  scanf("%d",&e);
  printf("Enter coefficinet of x^2\n");
  scanf("%d",&d);
  printf("Enter coefficient of x^3\n");
  scanf("%d",&c);
  printf("Enter coefficient of x^4\n");
  scanf("%d",&b);
  printf("Enter coefficient of x^5\n");
  scanf("%d",&a);
  printf("The polynomial is %dx^5+%dx^4+%dx^3+%dx^2+%dx+%d\n", a,b,c,d,e,f);
  printf("The derivative of the polynomial is %dx^4+%dx^3+%dx^2+%dx+%d\n",a*5,b*4,c*3,d*2,e);
  return 0;
}
  
