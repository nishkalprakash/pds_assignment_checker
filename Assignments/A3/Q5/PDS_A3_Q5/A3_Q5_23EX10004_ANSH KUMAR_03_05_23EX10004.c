// roll no-23EX10004
// NAME-ANSH KUMAR
#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h,i,j;
  printf("enter coefficient of x^0\n");
  scanf("%d",&f);
   printf("enter coefficient of x^1\n");
  scanf("%d",&e);
   printf("enter coefficient of x^2\n");
  scanf("%d",&d);
   printf("enter coefficient of x^3\n");
  scanf("%d",&c);
   printf("enter coefficient of x^4\n");
  scanf("%d",&b);
   printf("enter coefficient of x^5\n");
  scanf("%d",&a);
  printf("your polynomial is (%d*x^5)+(%d*x^4)+(%d*x^3)+(%d*x^2)+(%d*x^1)+%d\n",a,b,c,d,e,f);
  g=a*5;
  h=b*4;
  i=c*3;
  j=2*d;
  printf("the derivative of polynomial is(%d*x^4)+(%d*x^3)+(%d*x^2)+(%d*x)+%d)\n", g,h,i,j,e);
  return 0;
}
	 
