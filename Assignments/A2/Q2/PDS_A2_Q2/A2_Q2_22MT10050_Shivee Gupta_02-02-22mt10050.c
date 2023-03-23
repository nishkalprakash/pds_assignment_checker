#include<stdio.h>
#include<math.h>
int main()
{
    double a1 = 0.306;
    double rho1 = 1.2;
    double Rs1 = 6.96e8;
    double Ts1 = 1.3654e-11;
    double D1 = 1.496e11;
    double Tp1 = Ts1*sqrt(Rs1*sqrt((1-a1)/rho1)/2*D1);
    printf("Tp = %le\n",Tp1);

    double a, rho,Rs,Ts,D;
    printf("Enter the value of alpha :");
    scanf("%lf",&a);
    printf("Enter the value of rho : ");
    scanf("%lf",&rho);
    printf("Enter the value of Rs : ");
    scanf("%le",&Rs);
    printf("Enter the value of Ts : ");
    scanf("%le",&Ts);
    printf("Enter the value of D : ");
    scanf("%le",&D);
    double Tp = Ts*sqrt(Rs*sqrt((1-a)/rho)/2*D);
    printf("Tp = %le",Tp);
    return 0;
// The output is same for both the cases,i.e.,when the values are predefined in the program (i.e. no user input) and when the user is giving the input. The output is 8.591320e-02






}
