//Raju Kumar
//23EC30036
#include<stdio.h>
int main()
{
  int a=0,b=0,c=0,d=0,e=0,f=0;
  printf("enter cofficients of x^0:");
  scanf("%d",&f);
  printf("enter cofficients of x^1:");
  scanf("%d",&e);
  printf("enter cofficients of x^2:");
  scanf("%d",&d);
  printf("enter cofficients of x^3:");
  scanf("%d",&c);
  printf("enter cofficients of x^4:");
  scanf("%d",&b);
  printf("enter cofficients of x^5:");
  scanf("%d",&a);
  printf("polynomial:%d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x+%d",a,b,c,d,e,f);
  printf("derivative:%dx^4+%d*x^3+%d*x^2+%d*x+%d",5*a,4*b,3*c,2*d,e);
  return 0;
}
  
  
