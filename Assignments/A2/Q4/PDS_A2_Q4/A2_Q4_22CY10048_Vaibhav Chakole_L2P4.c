#include<stdio.h>
#include<math.h>
int main()
{
float u,e,c,d;
printf("Enter permittivity: ");
scanf("%f",&e);
printf("Enter permeability: ");
scanf("%f",&u);
d=u*e;
c=1/(sqrt(d));
printf("speed of light is:%f",c);
return 0;
}

