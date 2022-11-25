#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float c, nu, eps ;
printf("enter the value of nu \n");
scanf("%f", &nu);
printf("enter the value of eps \n");
scanf("%f", &eps);
c=1/sqrt(nu*eps);
printf("the speed of light is %f", c);
return 0;
}

