#include<stdio.h>
#include<math.h>

void main()
{
int a, b, c, m, x;
double;
scanf("%d%d%d", &a,&b,&c);
printf("The coefficients of the equation are %d,%d,%d\n", a,b,c);
m = (pow(b,2)) - 4*a*c;
if(m<0)printf("Roots are complex\n");
}
