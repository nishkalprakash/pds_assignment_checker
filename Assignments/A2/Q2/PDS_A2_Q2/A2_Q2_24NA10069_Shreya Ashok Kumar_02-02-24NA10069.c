//Program to define variables and calculate Tp
//Code Creator: Shreya Ashok Kumar
//Roll No:24NA10069

#include <stdio.h>
#include <math.h>
int main()
{
double pre_alpha,pre_rho,pre_Rs,pre_Ts,pre_D,pre_Tp,alpha,rho,Rs,Ts,D,Tp;
pre_alpha=0.306,pre_rho=1.2,pre_Rs=6.96e8,pre_Ts=1.3654e-11,pre_D=1.496e11;
printf("Enter values of alpha,rho,Rs,Ts,D:");
scanf("%lf,%lf,%lf,%lf,%lf",&alpha,&rho,&Rs,&Ts,&D);
Tp=Ts*sqrt(Rs*sqrt((1-alpha)/rho)/2*D);
pre_Tp=pre_Ts*sqrt(pre_Rs*sqrt((1-pre_alpha)/pre_rho)/2*pre_D);
scanf("%lf",&Tp);
printf("The value of Tp is %lf",Tp);
printf("The value of pre_Tp is %lf",pre_Tp);
return 0 ;
//the values of Tp AND pre_Tp are same

}


