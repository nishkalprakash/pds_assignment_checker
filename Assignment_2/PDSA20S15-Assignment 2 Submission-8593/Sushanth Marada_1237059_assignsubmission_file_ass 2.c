int main() {
    double a, b, c, discriminant, root1, root2;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("the coefficients of the equation are %lf %lf %lf", a, b, c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nroot1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("the roots of the equation are %.2lf;", root1);
        printf("\nthe roots are equal");
    }

    // if roots are not real
    else {
        printf("the roots are complex");
    }

    return 0;
}
