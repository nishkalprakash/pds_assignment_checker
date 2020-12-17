#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, D, r1, r2;
    printf("Enter the coefficients of the quadratic equation: \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("The coefficients of the equation are: %.3lf, %.3lf and %.3lf \n", a, b, c);
    D = pow(b, 2) - 4*a*c;
    if(D < 0)
    {
        printf("The roots are imaginary.");
    }
    else
    {
        r1 = ((-b) + sqrt(D))/(2*a);
        r2 = ((-b) - sqrt(D))/(2*a);
        printf("The roots of the equation are: %.3lf and %.3lf \n", r1, r2);
        if( r1 == r2)
            printf("The roots are equal. \n");
    }

    return 0;

}
