#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, x1, x2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %.2lf and x2 = %.2lf", x1, x2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        x1 = x2 = -b / (2 * a);
        printf("x1 = x2 = %.2lf;", x1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("x1 = %.2lf+%.2lfi and x2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
