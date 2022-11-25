#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float y, n, d;
printf("Enter the height :"); // asking user to enter the height//
scanf("%f", &y);
printf("Enter the number of rebounces:");
scanf("%f",&n);
d= y*(5-2*(pow(0.25,n))); //getting the distance traversed by using the height and number of rebounces entered by the user//
d= d/3;
printf("The distance traversed by the body is %f", d);

return 0;
}
