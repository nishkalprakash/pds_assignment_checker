#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
float d,r1,r2;
printf("Enter coefficient a: ");
scanf("%d",&a);
printf("Enter coefficient b: ");
scanf("%d",&b);
printf("Enter coefficient c: ");
scanf("%d",&c);
d=b*b-4*a*c;
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("\n First root: %f",r1);
printf("\n Second root: %f",r2);
return 0;
}
