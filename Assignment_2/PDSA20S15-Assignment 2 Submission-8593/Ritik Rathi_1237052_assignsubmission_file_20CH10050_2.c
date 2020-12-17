#include <stdio.h>
#include <math.h>

int main()

{
    float a,b,c;
    printf("Enter the coefficients: ");
    scanf("%f%f%f,&a,&b,&c");
    printf("The coefficients of the equation are:%f,%f,%f\n",a,b,c);

    float disc = b*b-4*a*c;
    if(disc<0)
    printf("The roots are complex");
    else
    if(disc=0)
    float root=(-b+sqrt(disc))/(2*a);
    printf("The roots are equal and are:%f\n",root);
    else
    float root1 = (-b+sqrt(disc))/(2*a);
    float root2 = (-b-sqrt(disc))/(2*a);
    printf("The roots of the equation are:%f,%f\n",root1,root2);

    return0;
}
