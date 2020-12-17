#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, val, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("The coefficients of the equation %f %f  %f \n",a,b,c);

    val = b * b - 4 * a * c;

    if(val<0)
    {
        printf("So,Nothing else to do\n");
    }
    else if(val>0)
    {
        root1 = (-b + sqrt(val)) / (2 * a);
        root2 = (-b - sqrt(val)) / (2 * a);
        printf("The roots of the equation are %.2f  %.2f\n", root1, root2);
    }
    else if (val == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots of the equation are %.2f  %.2f\n", root1,root2);
        printf("The roots are equal");
    }

    return 0;
}

