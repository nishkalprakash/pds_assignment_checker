#include<stdio.h>
#include<math.h>
int main()
{
    double alpha,rho, Rs,Ts,D;

    scanf("%lf %lf %le %le %le",&alpha,&rho,&Rs,&Ts,&D);
     printf("%lf %lf %le %le %le",alpha,rho,Rs,Ts,D);
    double Tp=Ts*pow(((Rs*pow(((1-alpha)/rho),0.5))/(2*D)),0.5);
    printf("the value of Tp is %le",Tp);
    return 0;

}
//the value is 5.742861e-13
