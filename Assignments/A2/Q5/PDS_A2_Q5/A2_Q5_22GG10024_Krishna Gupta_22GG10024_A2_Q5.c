#include <stdio.h>
#include <math.h>
int main () // main function 
{
   int Y,n; // declaration of interger variables
   float g = 9.78 , distance_travelled ; // declaration of floating point variables
   printf("Enter the height of the building : "); // taking the value for height of building
   scanf("%d",&Y);
    printf("Enter the number of bounces : "); // taking the value of number of bounces of ball
   scanf("%d",&n);
     distance_travelled = Y *(1 - (pow(0.25,n)))*(1.33); // computing the distance travelled by the ball
printf(" Distance travelled by the ball is %f" ,distance_travelled); // printing the value of distance travelled
return 0;
}
