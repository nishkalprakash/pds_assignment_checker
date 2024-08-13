#include <stdio.h>
#include <math.h>
int main()
{
double alpha=0.306 ,rho=1.2 ,Rs=6.96e8,Ts=1.3654e-11,D=1.496e11,Tp,n;
Tp = Ts*sqrt((Rs*(sqrt((1-alpha)/rho)))/2*D);
printf ("Tp value :%lf \n",Tp);


double alpha_ ,rho_ ,Rs_ ,Ts_ ,D_ ,Tp_;

printf("  alpha_=");
scanf("%lf",&n);

printf(" rho_=");
scanf("%lf",&n);

printf(" Rs_=");
scanf("%lf",&n);

printf(" Ts_=");
scanf("%lf",&n);

printf(" D_=");
scanf("%lf",&n);


Tp_= Ts_*sqrt((Rs_*(sqrt((1-alpha_)/rho_)))/2*D_);
printf("Tp value :%lf \n",Tp_); 

return 0;
}




