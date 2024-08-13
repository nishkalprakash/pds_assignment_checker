#include <stdio.h>
#include <math.h>
int main ()
{

double a=0.306, b=1.2, R=6.96e8, T=1.3654e-11, D=1.496e11, Tp ;
Tp=T*sqrt(R*sqrt((1-a)/b)/2*D);
//printf("\n%lf\n",sqrt(M_PI));
printf( "The value of Tp is %lf",Tp);


printf("\n Enter a: ");
scanf("%lf", &a);
printf("\n Enter b: ");
scanf("%lf", &b);
printf( "\n Enter R: ");
scanf("%lf", &R);
printf("\n Enter T: ");
scanf("%lf",&T);
printf( "\n Enter D: ");
scanf("%lf", &D);
Tp=T*sqrt(R*sqrt((1-a)/b)/2*D);
printf(" The value of Tp is %lf",Tp);
return 0;
}
