#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Enter the coefficients of the equation  ");
    scanf("%f%f%f", &a, &b, &c);
    if( a == 0)
    {
        printf("\nThe first coefficient of a quadratic equation cannot be 0");
        return 0;
    }
    printf("\nThe coefficients of the equation are %f, %f, %f", a, b, c);
    d = b*b - 4*a*c;
    if(d < 0)
    {
        printf("\nThe roots are complex.");
        return 0;
    }
    x1 = (- b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
    printf("\nThe roots of the equation are %f and %f", x1, x2);
    if(d == 0)
    {
        printf("\nThe roots are equal.");
    }
    return 0;
}
