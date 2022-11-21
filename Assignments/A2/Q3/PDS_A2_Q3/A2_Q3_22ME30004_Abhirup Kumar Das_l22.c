#include<stdio.h>
#include<stdlib.h>

#include<math.h>
int main()
{
int a,b,c;
scanf("%d %d %d", &a,&b,&c);
printf("%f %f", sqrt(pow(b,2)-4*a*c),sqrt(pow(b,2)-4*a*c));
float r=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
float  s=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
printf("The roots are %f and %f",r,s);
}
