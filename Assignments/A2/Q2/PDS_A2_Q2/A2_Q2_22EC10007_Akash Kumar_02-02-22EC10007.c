#include <stdio.h>
#include <math.h>


int main()
{

        double A=0.306, E=1.2, Rs=6.96e8, Ts=1.3654e-11, D=1.496e11, Tp;
    // Here, A stands for alpha and E stands for sigma

    Tp = Ts*sqrt((Rs*sqrt((1-A)/E))/(2*D));

    printf("The calculated value of Tp. when the values for the variables are assigned in the code itself, is %le\n", Tp);

    /* Here, I have assigned the values to the variables, as given in the question.
    The calculated value of Tp is given as the output.

    The following code is to take the values for the variable from the user.*/

    printf("Enter the values of A, E, Rs, Ts, D\n");
    scanf("%lf %lf %lf %lf %lf", &A, &E, &Rs, &Ts, &D);


    Tp = Ts*sqrt((Rs*sqrt((1-A)/E))/(2*D));

    printf("The calculated value of Tp is %le\n", Tp);


    return 0;

}