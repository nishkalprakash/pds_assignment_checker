#include<stdio.h>
#include<math.h>

int main()
{
    float alpha, rho, Rs, Ts, D, Tp;

    alpha = 0.306;
    rho = 1.2;
    Rs = 6.96e8;
    Ts = 1.3654e-11;
    D = 1.496e11;

    printf("**Note please use the exponential notations while writing values**\n\n");

    // Following are the commands to take the required inputs
    printf("Enter the value of alpha : \n");
    scanf("%f", &alpha);

    printf("Enter the value of rho : \n");
    scanf("%f", &rho);

    printf("Enter the value of Rs : \n");
    scanf("%f", &Rs);

    printf("Enter the value of Ts : \n");
    scanf("%f", &Ts);

    printf("Enter the value of D : \n");
    scanf("%f", &D);

    // Calculation of Tp with the given formula
    Tp = Ts*(sqrt(Rs*sqrt((1-alpha)/rho)/(2*D)));
    printf("The value of Tp for given values is : %e\n", Tp);

    /*
    If we don't take any user input the value of Tp is = 5.742861e-13

    The values that i used for calculation are
    alpha = 0.306;
    rho = 1.2;
    Rs = 6.96e8;
    Ts = 1.3654e-11;
    D = 1.496e11;

    So the value of Tp obtained is = 5.751106e-13

    As you can see there is a difference between the values of Tp when calculated
    with values defined and when calculated with the user input values.
    This is because when the input is taken some of it is approximated.
    */

    return 0;

}
