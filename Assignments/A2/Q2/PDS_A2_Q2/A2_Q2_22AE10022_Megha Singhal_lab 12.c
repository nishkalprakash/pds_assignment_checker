#include<stdio.h>
#include<math.h>
int main()
{
    double alpha,rho,Rs,Ts,D,Tp;
    printf("Enter value of alpha\nalpha = ");
    scanf("%lf",&alpha);
    printf("Enter value of rho\nrho = ");
    scanf("%lf",&rho);
    printf("Enter value of Rs\nRs = ");
    scanf("%lf",&Rs);
    printf("Enter value of Ts\nTs = ");
    scanf("%lf",&Ts);
    printf("Enter value of D\nD = ");
    scanf("%lf",&D);
    Tp=Ts*(sqrt(Rs*sqrt((1-alpha)/rho))/(2*D));
    printf("Tp=%lf",Tp);
    double alpha1=0.306,rho1=1.2,Rs1=6.96e8,Ts1=1.3654e-11,D1=1.496e11,Tp1;
    Tp1=Ts1*(sqrt(Rs1*sqrt((1-alpha1)/rho1))/(2*D1));
    printf("\nTp1=%lf",Tp1);
    return 0;
}
/*Predefined values and values by user give same output*/
