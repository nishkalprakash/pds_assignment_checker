#include <stdio.h>
#include <math.h>
int main()
{
    float alpha= 0.306, rho = 1.2;
    double Rs= 6.96e8, Ts=1.3654e-11, D=1.496e11, Tp;
    Tp= Ts*sqrt(Rs*(sqrt((1-alpha)/rho))/2*D);
    printf("The value of Tp is: %le\n", Tp); //The value of Tp when calculated from already stored values 8.591320e-02
    scanf("%f%f%lf%lf%lf", &alpha, &rho, &Rs, &Ts, &D);
    Tp= Ts*sqrt(Rs*(sqrt((1-alpha)/rho))/2*D);
    printf("The value of Tp is: %le\n", Tp); //The value of Tp when calculated from user input values
    // The value of Tp coming from both the cases are same.As instructed by our TA we used %lf and %le while taking the input and giving output respectively
    return 0;

}

