#include <stdio.h>
#include <math.h>
int main()
{
   double m=0.125,g=9.78;
   double n,y,d=0.0;
   printf("Enter the value of initial height ");            // Takes the input for the initial height
   scanf("%lf",&y);
   printf("Enter the value of the number of collisions: "); // Takes the input for the number of collisions
   scanf("%lf",&n);
   d=y+(2.0/3.0)*y*(1-(1/pow(2,(2*(n-1)))));                          // calculation of the total distance travelled
   printf("The total distance travelled = %lf",d);
   return 0;
}
   
   
