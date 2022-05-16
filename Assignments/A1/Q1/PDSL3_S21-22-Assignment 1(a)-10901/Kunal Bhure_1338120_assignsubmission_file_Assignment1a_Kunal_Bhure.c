#include<stdio.h>
int main()
{
float a,u, alpha,t, s, d;
printf("Enter values of a u alpha in order:");
scanf("%f%f%f",&a,&u,&alpha);
printf("Enter time:");
scanf("%f",&t);
s=u*t+(0.5)*(alpha)*t*t ;
d=s-a;
printf("Distance travelled is %f",d);
return 0;
}
