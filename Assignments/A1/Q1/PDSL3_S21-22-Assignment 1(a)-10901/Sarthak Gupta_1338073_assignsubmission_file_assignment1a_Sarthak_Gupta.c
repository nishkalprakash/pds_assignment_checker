#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ float a,u,alpha,t,d;
printf("Enter the initial position a\n");
scanf("%f",&a);
printf("Enter the velocity u\n");
scanf("%f",&u);
printf("Enter the accerleration alpha ");
scanf("%f",&alpha);
printf("Enter time t\n");
scanf("%f",&t);
d=a+u*t+(0.5)*alpha*t*t;
printf("The distance of the particle from the origin at time %f is %f",t,d);
return 0 ;    
}