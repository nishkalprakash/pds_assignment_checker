#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h,i,j,k;
  printf("enter coeff of x^5\n");
  scanf("%d",&a);
  printf("enter coeff of x^4\n");
  scanf("%d",&b);
  printf("enter coeff of x^3\n");
  scanf("%d",&c);
  printf("enter coeff of x^2\n");
  scanf("%d",&d);
  printf("enter coeff of x\n");
  scanf("%d",&e);
  printf("enter constant\n");
  scanf("%d",&f);
  g=5*a;
  h=4*b;
  i=3*c;
  j=2*d;
  printf("polynomial=%dx^5+%dx^4+%dx^3+%dx^2+%dx+%d\n",a,b,c,d,e,f);
  printf("derivative=%dx^4+%dx^3+%dx^2+%dx+%d",g,h,i,j,e);
  return 0;
}
  
