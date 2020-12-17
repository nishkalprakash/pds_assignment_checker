#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,discriminant,root1,root2,realpart,imaginarypart;
    printf("The coefficients of the equations are a,b,c");
    scanf("f%f%f,%a,%b,%c");

    discriminant =b*b-4*a*c;
    //condition for real and different roots
    if (discriminant>0)
    {
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2=(-b+sqrt(discriminant))/(2*a);
    printf("root1 = %.2f and root2 = %.2f",root1,root2);
    }

    //condition for real and equal roots
    if (discriminant == 0)
    {
    root1 = root2 = -b/(2*a);
    printf("root1=root2= %.2f",root1);
    }

    //if the roots are not real
    {
    realpart = -b/(2*a);
    imaginarypart = sqrt(-discriminant)/(2*a);
    printf("root1 = %.2f+%.2fl and root2 = %.2f-%.2fl",realpart,imaginarypart,realpart,imaginarypart);
    }

    return 0;
}
