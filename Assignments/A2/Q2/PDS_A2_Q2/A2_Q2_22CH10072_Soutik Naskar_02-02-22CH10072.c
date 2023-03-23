
#include<stdio.h>
#include<math.h>

int main()
{
    double alpha,rho,Rs,Ts,D;
    printf("enter the value of alpha\n");
    scanf("%lf",&alpha);
    printf("enter the value of rho\n");
    scanf("%lf",&rho);
    printf("enter the value of Rs\n");
    scanf("%lf",&Rs);
    printf("enter the value of Ts\n");
    scanf("%lf",&Ts);
    printf("enter the value of D\n");
    scanf("%lf",&D);

    double Tp=Ts*(sqrt(Rs*sqrt((1-alpha)/rho))/2*D);
    printf("Tp=%lf",Tp);
   {


    double alpha=0.306,rho=1.2,Rs=6.96e8,Ts=1.3654e-11,D=1.496e11;

    double Tp=Ts*(sqrt(Rs*sqrt((1-alpha)/rho))/2*D);
    printf("Tp=%lf",Tp);

   }

    return 0;


}
