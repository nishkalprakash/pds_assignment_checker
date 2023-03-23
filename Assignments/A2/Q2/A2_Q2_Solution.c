// C Program to Tp = Ts * sqrt((Rs*sqrt((1-alpha)/rho))/ (2*D))
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)

#include <stdio.h>
#include <math.h>
int main()
{
    // double alpha = 0.306;
    // double rho = 1.2;
    // double Rs = 6.96e8;
    // double Ts = 1.3654e-11;
    // double D = 1.496e11;
    // double Tp;
    double Ts, Rs, D, alpha, rho, Tp;
    printf("Enter the value of alpha: ");
    scanf("%lf", &alpha); // Input alpha
    printf("Enter the value of rho: ");
    scanf("%lf", &rho); // Input rho
    printf("Enter the value of Rs: ");
    scanf("%le", &Rs); // Input Rs
    printf("Enter the value of Ts: ");
    scanf("%le", &Ts); // Input Ts
    printf("Enter the value of D: ");
    scanf("%le", &D);                                         // Input D
    Tp = Ts * sqrt((Rs * sqrt((1 - alpha) / rho)) / (2 * D)); // Computing Tp
    printf("Tp = %le\n", Tp);                                 // Printing Tp
    printf("alpha = %.3lf\n", alpha);                         // Printing alpha
    printf("rho = %.3lf\n", rho);                             // Printing rho
    printf("Rs = %.3le\n", Rs);                               // Printing Rs
    printf("Ts = %.3le\n", Ts);                               // Printing Ts
    printf("D = %.3le\n", D);                                 // Printing D
    return 0;
}
/*
User input Tp = 5.742861e-013
Predefined input Tp = 5.742861e-013
Observation: There is no change in the outputs
*/