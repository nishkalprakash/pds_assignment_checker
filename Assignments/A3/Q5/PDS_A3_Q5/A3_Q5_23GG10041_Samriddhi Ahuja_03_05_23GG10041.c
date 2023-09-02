//roll no. <23GG10041>
//name <samriddhi ahuja>
#include <stdio.h>
int main()
{
  int a, b, c, d, e, f;
printf("enter the coeff of x^0=");
scanf("%d", &f);
printf("enter the coeff of x^1=");
scanf("%d", &e);
printf("enter the coeff of x^2=");
scanf("%d", &d);
printf("enter the coeff of x^3=");
scanf("%d", &c);
printf("enter the coeff of x^4=");
scanf("%d", &b);
printf("enter the coeff of x^5=");
scanf("%d", &a);
printf("given polynomial is = %dx^5 + %dx^4 + %dx^3 + %dx^2 + %dx^1 + %dx^0\n", a,b,c,d,e,f);
 
printf("derivative of the polynomial is = %dx^4 + %dx^3 + %dx^2 + %dx^1 +%d\n",5*a,4*b,3*c,2*d,e);
return 0;
}
