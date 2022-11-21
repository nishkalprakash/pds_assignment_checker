#include <stdio.h>
#include<math.h>
 int main()
{
float a,b,c,r1,r2,d;
printf("enter the values of a b c");
scanf("%f%f%f",&a,&b,&c);
d= b*b-4*a*c;
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("the roots =%f%f",r1,r2);
return 0;
 }
