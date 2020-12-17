#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, D, RootOne, RootTwo, Root;
    printf("Enter the values of coefficients of the equation(Standard Form): ");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("a= %lf      b= %lf      c= %lf\n", a, b, c);


     D = (b*b)-(4*a*c);

       if(D>0)
       {
        RootOne = (-b + sqrt(D))/(2*a);
        RootTwo = (-b - sqrt(D))/(2*a);
        printf("The roots are real but unequal\n");
        printf("First Root = %lf and Second Root = %lf ", RootOne, RootTwo);

       }
       else if(D==0)
       {
           Root = (-b)/(2*a);
           printf("The Roots are equal and it is equal to %lf", Root);
       }

       else
       {
           printf("The Roots are complex and nothing else to be done.");

       }


    return 0;
}
