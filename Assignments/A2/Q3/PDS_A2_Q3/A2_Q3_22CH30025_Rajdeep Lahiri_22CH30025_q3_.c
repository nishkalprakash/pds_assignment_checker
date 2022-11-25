#include <stdio.h>
# include <math.h>
int main()
{
    int a,b,c; // declaring the variables
    float r1,r2,squareroot; 
    printf("enter the coefficients for the quadratic equation");
    scanf("%d %d %d",&a,&b,&c);//taking input for the variables
    squareroot = sqrt(b*b - 4*a*c);//computing the discriminant
    r1 = (-b+squareroot)/(2*a);//computing the roots
    r2 = (-b-squareroot)/(2*a);
    printf("%f %f", r1,r2);// prints the root of this equation
    return 0;
}
    

