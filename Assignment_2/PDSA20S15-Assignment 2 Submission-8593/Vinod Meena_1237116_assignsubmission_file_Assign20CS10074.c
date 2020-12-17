# include <stdio.h>
#include <math.h>
int main()
{
int a=16;int b= 24; int c =9;
scanf("%d%d%d",&a,&b,&c);
printf("the coefficients of equation are %d,%d,%d ",a,b,c);

if (b*b-4*a*c>=0);
{
printf("the roots of equation are %d,%d\n",-b/2 +sqrt(b*b-4*a*c)/2,-b/2 -sqrt(b*b-4*a*c)/2);
if (b*b-4*a*c==0)
    {
printf("the roots are equal\n");
}
}
else
{
printf("the roots of equation are imaginary\n");
}
return 0;
}
