#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
double d,x,y;
printf("Type the values of the coefficients a,b,c:\n");
scanf("%f%f%f",&a,&b,&c);
printf("The coefficients of the are %f %f %f",a,b,c);
d=b*b-4*a*c;
x=((-b+sqrt(d))/2*a);
y=((-b-sqrt(d))/2*a);
 if (d<0)
  printf("The roots are complex in nature\n");
 else
  printf("The roots are %f & %f",x,y);

}
