#include <stdio.h>
#include <math.h>
int main() // main function
{ 
    double epsilon_not, mew_not , c ; // declaration of variables
   printf("Enter the value of epsilon_not :"); // asking for input
   scanf("%lf", &epsilon_not); // taking the input
   printf("Enter the value of mew_not:");// asking for input
   scanf("%lf", &mew_not);// asking for input
     c = 1/(sqrt(epsilon_not*mew_not));// evaluating the speed of light 
   printf("the speed of light is : %lf" ,c);// printing the value of speed of light
     return 0;
}
