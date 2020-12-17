#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x1, x2, x;
    printf("Enter the coefficients of equation\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("The coefficients of the equation are %f %f %f\n", a, b, c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("The roots are real and roots are: %f%f\n", x1, x2);
    }
    else if (d == 0)
    {
        x = -b / (2*a);
        printf("The roots are equal and root is: %f\n", x);
    }

    else
    printf("The roots are imaginary\n");


    }
