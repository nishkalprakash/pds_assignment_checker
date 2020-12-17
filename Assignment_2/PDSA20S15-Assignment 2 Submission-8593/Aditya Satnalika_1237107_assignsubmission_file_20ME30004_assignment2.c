#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,disc,r1,r2;
    printf("Enter the coefficient of x^2\n");                                                             //Taking inputs for the coefficients
    scanf("%lf",&a);
    printf("Enter the coefficient of x\n");
    scanf("%lf",&b);
    printf("Enter the constant term\n");
    scanf("%lf",&c);
    printf("The coefficients of the equation from higher to lower power are:%lf , %lf , %lf \n",a,b,c);   //printing the inputs taken for the coefficients
    disc=pow(b,2)-(4*a*c);
    if(disc<0)                                                         //Checking if the roots are complex or not
    {
        printf("The given quadratic equation has complex roots\n");
    }
    else
    {                                                                  //Calculating the roots
        r1=-b+sqrt(disc);
        r1=r1/(2*a);
        r2=-b-sqrt(disc);
        r2=r2/(2*a);
        printf("The roots of the equation are:%lf and %lf\n",r1,r2);   //Printing the roots of the equation
        if(disc==0)
        {
            printf("The roots are equal\n");
        }
    }

}
