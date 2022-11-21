#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float spd, nu, eps;
printf("Enter the value of Nu:");   // Asking the user to enter the values of the constants//
scanf("%f", &nu);
printf("Enter the value of Eps:");
scanf("%f", &eps);
spd= sqrt((nu*eps));  // formulating the speed using the given credentials//
spd= 1/spd;
printf("The speed of light is %f", spd);

return 0;
}
