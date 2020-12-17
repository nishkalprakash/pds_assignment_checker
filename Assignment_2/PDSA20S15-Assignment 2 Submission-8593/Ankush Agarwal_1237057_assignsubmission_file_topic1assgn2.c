#include <stdio.h>
#include <math.h>
int main(){
float a,b,c;
printf("Enter the values of a,b&c\n");
scanf("%f%f%f",&a,&b,&c);
printf("The coefficients of the equation are a=%f, b=%f and c=%f\n",a,b,c);
float d=(b*b)-(4*a*c);
if(d<0)
{
    printf("The roots of the equation are complex.");
    return 0;
}
float x1,x2;
double x=sqrt(d);
x1=(-b+x)/(2*a);
x2=(-b-x)/(2*a);
if(x1==x2)
{
    printf("The roots of the equation are %f,%f\n",x1,x2);
    printf("The roots are equal.\n");
}
else
    printf("The roots of the equation are %f,%f",x1,x2);
}
