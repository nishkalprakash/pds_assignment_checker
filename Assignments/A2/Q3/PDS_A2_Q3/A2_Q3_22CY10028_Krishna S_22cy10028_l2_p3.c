#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float a, b, c, root1, root2;
printf("Enter the coefficients:"); // getting inputs from the user (coefficients of the variables//
scanf("%f %f %f", &a, &b, &c);
root1 = (-b) + sqrt((b*b) -(4*a*c)); // using the quadratic formula to get the roots of the equation//
root1= root1/(2*a);
root2= (-b) - sqrt((b*b) -(4*a*c));
root2= root2/(2*a);
printf("The root is %f \n ", root1);  // printing the roots of the equation//
printf("The root is %f", root2);

return 0;
}
