#include<math.h>
#include<stdio.h>
int main ()
{
float u,e,c;
printf("enter permeability:");
scanf("%f",&u);
printf("enter permittivity:");
scanf("%f",&e);
c=1/(sqrt(u*e));
printf("\n speed of light: %f",c);
return 0;
}
