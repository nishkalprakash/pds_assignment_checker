#include<stdio.h>
#include<math.h>

void main()
{
    double Tp;
    double alpha,rho, Rs, Ts, D;
    printf("alpha = ");
    scanf("%lf",&alpha);
    printf("rho = ");
    scanf("%lf",&rho);
    printf("Rs = ");
    scanf("%lf",&Rs);
    printf("Ts = ");
    scanf("%lf",&Ts);
    printf("D = ");
    scanf("%lf",&D);
    Tp = Ts*(sqrt(Rs*sqrt((1-alpha)/rho)/2/D));
    printf(" With user input : Tp = %le\n",Tp);
    alpha = 0.306;
    rho = 1.2;
    Rs = 6.96e8;
    Ts = 1.3654e-11;
    D = 1.496e11;
    Tp = Ts*(sqrt(Rs*sqrt((1-alpha)/rho)/2/D));
    printf(" With NO user input : Tp = %le\n",Tp);
}
// The value obtained from already entered values was 5.742861e-13
// The value obtained by user entered values was 5.741178e-13
// This shows that the values are being rounded or approximated by the computer, thus creating this error.
// But, however, later after making some changes in the code, both the values are coming out to be same.
// Hence it may be concluded that approximation errors occur in some cases, and don't occur in some other cases.
