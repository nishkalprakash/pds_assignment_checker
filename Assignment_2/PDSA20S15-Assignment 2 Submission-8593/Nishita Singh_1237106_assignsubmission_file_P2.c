#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, D, root1, root2;

        printf("Enter the coefficients a,b and c\n");
        scanf("%f %f %f",&a, &b, &c);

    D = pow(b,2)-(4*a*c);
    root1 = (-b + sqrt(D))/(2*a);
    root2 = (-b - sqrt(D))/(2*a);

    if(D>0)
        printf("the roots are %f and %f\n",root1, root2);
    if(D==0)
        printf("the roots are %f and %f and The roots are equal\n",root1, root2);
    if(D<0)
        printf("The roots are complex");

return 0;
}
