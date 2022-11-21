#include <stdio.h>
#include <math.h>
int main() 
{
float a, b, c;
printf("Enter the coefficient of x^2");
scanf("%f", &a);
printf("Enter the coefficient of x");
scanf("%f", &b);
printf("Enter the constant value");
scanf("%f", &c);
float d=0;
d=sqrtf((pow(b, 2)-4*a*c));
float h1=0, h2=0;
h1=((-b+d)/(2*a));
h2=((-b-d)/(2*a));

printf("The roots of the quadratic eqation are \n");
printf("%f and %f", h1, h2);
return 0;
}
