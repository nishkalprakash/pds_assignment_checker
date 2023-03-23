#include<stdio.h>
#include<math.h>
int main()
{
 double a,s,r,t,d,T ;
 /*a=0.306 ;
 s= 1.2;
 r= 6.96e8;
 t=1.3654e-11
 d=1.496e11*/

printf("enter a\n");
scanf("%lf",&a);
printf("enter s\n");
scanf("%lf",&s);
printf("enter r\n");
scanf("%lf",&r);
printf("enter t\n");
scanf("%lf",&t);
printf("enter d\n");
scanf("%lf",&d);

printf("%le\n%le\n%le\n%le\n%le\n",a,s,r,t,d);
T=t*(sqrt(r/(2*d)*sqrt((1-a)/s)));

printf("Tp=%le",T);
return 0 ;
}

