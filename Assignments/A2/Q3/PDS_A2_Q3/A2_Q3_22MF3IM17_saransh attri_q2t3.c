#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int a,b,c;
printf("write the coefficients of quadraic equation as ax^2+bx+c=0 \n  a=");
scanf("%d",&a);
printf("\n b=");
scanf("%d",&b);
printf("\n c=");
scanf("%d",&c);
int r=(-b+ sqrt(b*b-4*a*c))/(2*a);
int s=(-b- sqrt(b*b-4*a*c))/(2*a);
printf("/n the roots of the equation are %d and %d",r,s); 
}
