#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, r1, r2;
    double D;
    printf("Please enter coefficients of the quadratic equation: \n");
    scanf("%f%f%f", &a, &b, &c);
    printf("\nThe coefficients of the quadratic equation are %f, %f, %f ", a, b, c);
    D=(pow(b, 2)-(4*a*c));
    if (D < 0)
        printf("\n\nThe quadratic has complex roots.");
    else if (D == 0)
    {   r1 = (-b)/(2*a);
        printf("\n\nThe roots are %f, %f", r1, r1);
        printf("\nThe roots are equal.");
    }
    else
    {   r1 = (-b + sqrt(D))/(2*a);
        r2 = (-b - sqrt(D))/(2*a);
        printf("\n\nThe roots of the equation are %f, %f", r1, r2);
    }
    printf("\n");
    return 0;
}
