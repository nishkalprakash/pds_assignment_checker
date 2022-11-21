#include <stdio.h>
#include <math.h>
int main()
{
double u,e;
double c;
printf("Enter permeability of free space = ");
scanf("%le",&u);
printf("Enter permittivity of free space = ");
scanf("%le",&e);
c=1/sqrt(u*e);
printf("Speed of Light = %lf\n",c);
return 0;
}
