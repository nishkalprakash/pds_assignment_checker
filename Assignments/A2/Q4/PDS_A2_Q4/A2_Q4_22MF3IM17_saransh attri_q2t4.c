#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ double a,b;
printf("write the value of permittivity");
scanf("%lf",&a);
printf("\n write the value of permeabillity");
scanf("%lf",&b);
double d=sqrt(a*b);
double c= 1/d;
printf("\n the speed of light is %lf",c);
return 0;
}
