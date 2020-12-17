#include <stdio.h>
int main()
{
int a,b;
scanf("%d%d", &a ,&b);
int c;
scanf("%d", &c);
printf("the coefficients of the equation are %d,%d,%d\n",a,b,c);
double e,f;
e=(-b+sqrt(b*b-4*a*c))/(2*a);
f=(-b-sqrt(b*b-4*a*c))/(2*a);
if(b*b>=4*a*c)
printf("the roots of the eqation are %d,%d\n",e,f);
else printf("nothing else to be done");

}
