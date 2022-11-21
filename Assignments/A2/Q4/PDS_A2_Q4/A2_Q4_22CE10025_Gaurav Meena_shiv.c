#include<stdio.h>
#include<math.h>

int main()
{
 double u,e,c;
 scanf("%lf%lf",&u,&e);
 u=12.566e-7;
 e=8.85e-12;

 c=1/sqrt(u*e);
 printf("%lf",c);
 return 0;
 }
