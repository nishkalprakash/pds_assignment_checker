#include<stdio.h>
#include<math.h>
int main()
{
    double alpha;
    double rho;
    double Rs;
    double Ts;
    double D;
    alpha = 0.306;
    rho = 1.2;
    Rs = 6.96e8;
    Ts = 1.3654e-11;
    D = 1.496e11;
    double Tp = Ts * sqrt(Rs*sqrt((1-alpha)/rho)/(2*D));
    printf("%le\n",Tp);//direct output

    double alpha1;
    double rho1;
    double Rs1;
    double Ts1;
    double D1;
    printf("Enter alpha = ");//taking input from user
    scanf("%lf",&alpha1);
    printf("Enter rho = ");//taking input from user
    scanf("%lf",&rho1);
    printf("Enter Rs = ");//taking input from user
    scanf("%le",&Rs1);
    printf("Enter Ts = ");//taking input from user
    scanf("%le",&Ts1);
    printf("Enter D = ");//taking input from user
    scanf("%le",&D1);
    double Tp1 = Ts1 * sqrt(Rs1*sqrt((1-alpha1)/rho1)/(2*D1));
    printf("%le",Tp1);//output from user input
    return 0;
}
//values of both output are same while comparing
//value I got is 5.742861e-13
