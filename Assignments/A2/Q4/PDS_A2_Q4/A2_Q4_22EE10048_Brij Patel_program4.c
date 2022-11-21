#include <math.h>
#include <stdio.h>
int main()
{
float u,e,c;
printf("Enter permeability: ");
scanf("%f",&u);
printf("Enter permittivity: ");
scanf("%f",&e);
c=1/(sqrt(u*e));
printf("\n Speed of light: %f",c);
return 0;
}

