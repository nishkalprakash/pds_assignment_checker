#include <stdio.h>
#include <math.h>

int main()
{
    float a=0.0,b=0.0,c=0.0;
    float r1=0.0,r2=0.0;
    double D=0.0;
    printf("Enter coefficients a,b and c of the quadratic:\n\n");
    scanf("%f%f%f",&a,&b,&c);

    printf("Coefficients of the equation are: a=%f, b=%f, c=%f .\n\n",a,b,c);

    D=(b*b)-4.0*a*c;  //Evaluating discriminant
    if (D<0) //Checking for real number condition
        printf("Roots are complex (non-real).\n\n");
    else
    {
        r1=((-b+sqrt(D))/2.0)/a;  // Sridharacharya method
        r2=((-b-sqrt(D))/2.0)/a;
        printf("Roots of the quadratic are : %f and %f .\n\n",r1,r2);
        if (D==0)
            printf("We observe that the roots are equal.\n\n"); // For perfect squares
    }
    return 0;
} // Program ends.





