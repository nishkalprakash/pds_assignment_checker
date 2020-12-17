#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c,D,E;
printf("the Quadratic equation under analysis is of type ax^2+bx+c\n");
printf("please provide a:\n");
scanf("%d",&a);
printf("please provide b:\n");
scanf("%d",&b);
printf("please provide c:\n");
scanf("%d",&c);
D=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
E=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
if ((pow(b,2)-4*a*c)>0 || (pow(b,2)-4*a*c)==0) printf("roots of the given equation are %d %d\n",D,E);
  else printf("roots are complex nothing else can be done\n");
   }
