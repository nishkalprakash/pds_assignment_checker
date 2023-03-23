#include<stdio.h>
#include<math.h>
int main()
{
double alpha, rho,Rs, Ts,D,Tp;

printf("Please enter the values of alpha , rho , Rs , Ts , D in the respective order\n");

scanf("%lf %lf %le %le %lf",&alpha,&rho,&Rs,&Ts,&D);
Tp=Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*D));

printf("the value of Tp is %lf \n",Tp);
alpha=0.306;
rho=1.2;
Rs=6.96e8;
Ts=1.3654e-11;
D=1.496e11;
printf("the default value is %le\n",Tp);
return 0;
//when i entered the values myself in the terminal it gave the output as 0.000000 but reading the default values it gave the output as 5.742861e-13//
}
