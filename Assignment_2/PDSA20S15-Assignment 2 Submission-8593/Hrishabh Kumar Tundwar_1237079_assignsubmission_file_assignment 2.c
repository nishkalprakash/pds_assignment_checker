#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the coefficients a, b, c of the quadratic equation a(x^2) + b(x) +c = 0\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("The coefficients of the equation are %d, %d, %d\n", a, b, c);
    double D, r1, r2;
    D = (pow(b,2)) - 4*a*c;
    r1 = (- b + sqrt((pow(b,2)) - 4*a*c))/2;
    r2 = (- b - sqrt((pow(b,2)) - 4*a*c))/2;
    if ( D < 0)
        printf("nothing else to be done\n");
    else
       {
        printf("The roots of the equation are %f, %f\n", r1, r2);
        if (r1 == r2)
            printf("The roots are equal");
       }


    }
