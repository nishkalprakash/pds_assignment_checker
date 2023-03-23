
#include<stdio.h>
#include<math.h>
int main()
{
double alpha,rho,Rs,Ts,D,Tp;
printf("CASE 1:Enter the values of alpha,rho,Rs,Ts,D:");
scanf("%lf %lf %le %le %le",&alpha,&rho,&Rs,&Ts,&D);
printf("alpha=%lf\nsigma=%lf\nRs=%le\nTs=%le\nD=%le",alpha,rho,Rs,Ts,D);
Tp=Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
printf("\nThe value of Tp=%le",Tp);// by taking input we are getting Tp=9.786236e-08
double alpha1=0.306,rho1=1.2,Rs1=6.96e8,Ts1=1.3654e-11,D1=1.4968,Tp1;
printf("\nCASE 2:\nalpha1=0.306,rho1=1.2,Rs1=6.96e8,Ts1=1.3654e-11,D1=1.4968");
Tp1=Ts1*sqrt((Rs1*sqrt((1-alpha1)/rho1))/2*D1);
printf("The value of Tp1=%le",Tp1);//by declaring the input values of alpha,rho,Rs,Ts,D we are getting Tp1=2.717540e-07
}

