#include <stdio.h>
int main()
{ int a,b,c,d,e,f,polynomial,derivative;
  printf("Enter the coefficient of  x^5\n");
  scanf("%d",&a);
  printf("Enter the coefficient of  x^4\n");
  scanf("%d",&b);
  printf("Enter the coefficient of  x^3\n");
  scanf("%d",&c);
  printf("Enter the coefficient of  x^2\n");
  scanf("%d",&d);
	         printf("Enter the coefficient of  x^1\n");
		 scanf("%d",&e);
 printf("Enter the coefficient of  x^0\n");
 scanf("%d",&f);
 printf("polynomial=%d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d\n",a,b,c,d,e,f);
 int a5=a*5,b4=b*4,c3=c*3,d2=d*2;
 printf("Derivative=%d*x^4+%d*x^3+%d*x^2+%d*x+%d\n",a5,b4,c3,d2,e);
 return 0;
}
