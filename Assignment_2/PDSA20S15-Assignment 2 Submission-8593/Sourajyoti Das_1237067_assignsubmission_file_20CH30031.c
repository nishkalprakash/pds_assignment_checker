#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f;
printf("Enter the coefficients\n");
scanf("%f%f%f",&a,&b,&c);
printf("The coefficients for the equation are %.2f,%.2f,%.2f\n",a,b,c);
d=(pow(b,2))-(4*a*c);
if (d<0) printf ("The roots are complex.");
else
{
e=(((-1*b)+(sqrt(d)))/(2*a));
f=(((-1*b)-(sqrt(d)))/(2*a));
printf("The roots are %.2f and %.2f.\n",e,f);
if (!d) printf ("The roots are equal.");
}
return 0;
}
