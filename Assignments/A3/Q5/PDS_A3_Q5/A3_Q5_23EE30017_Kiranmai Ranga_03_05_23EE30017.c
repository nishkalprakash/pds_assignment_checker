//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h,i,j;
  printf("Enter the coefficient of x^0:");
  scanf("%d", &a);
  printf("Enter the coefficient of x^1:");
  scanf("%d",&b);
  printf("Enter the coefficient of x^2:");
  scanf("%d",&c);
  printf("Enter the coefficient of x^3:");
  scanf("%d",&d);
  printf("Enter the coefficient of x^4:");
  scanf("%d",&e);
  printf("Enter the coefficient of x^5:");
  scanf("%d",&f);
  printf("The polynomial is %d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x+%d\n",f,e,d,c,b,a);
  g=5*f;
  h=4*e;
  i=3*d;
  j=2*c;
  printf("The derivative is %d*x^4+%d*x^3+%d*x^2+%d*x+%d",g,h,i,j,b);
  return 0;
}



  
