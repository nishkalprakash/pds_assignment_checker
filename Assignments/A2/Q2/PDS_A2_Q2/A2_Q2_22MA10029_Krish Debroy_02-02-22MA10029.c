#include <stdio.h>
#include <math.h>

int main()
{
    double alpha , rho , Rs, Ts, D , Tp;
    printf("Enter the value of alpha, rho, Rs, Ts, and D respectively:\n");
    scanf("%lf%lf%le%le%le", &alpha, &rho , &Rs , &Ts, &D);
    Tp= Ts* sqrt(Rs/(2*D)*sqrt((1-alpha)/rho));
    printf("Tp= %le\n", Tp);
    return 0 ;
    /*When i hard coded the values of the variables i got the value of Tp as 5.742861e-13  when i gave the conversion character as le.
    Also when i input the values manually i was getting the same value. The important point was to use %le and not %lf to read inputs in scientific notations as well as to display outputs in scientific notations .
    Otherwise Many of the values were being read as 0.000000 and Tp was also being shown as 0.000000.*/
}
