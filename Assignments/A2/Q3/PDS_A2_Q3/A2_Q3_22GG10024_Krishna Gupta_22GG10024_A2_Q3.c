#include <stdio.h>
#include <math.h>
int main() // main function
{ 
    int a , b , c, root1,root2; // declaration of integer variables
   printf("Enter the co-fficient of x^2 :");// taking the input for co-fficient of x^2 
   scanf("%d"  , &a);
   printf("Enter the co-fficient of x :");// taking the input for co-fficient of x
   scanf("%d"  , &b);
   printf("Enter the contant term :");// taking the imput for constant term of the qudratic equation
   scanf("%d"  , &c);
     
    root1 = (-b+sqrt((b*b)-4*a*c))/(2*a); // evaluating the first root 
    root2 = (-b-sqrt((b*b)-4*a*c))/(2*a); // evaluating the second root
printf("The first root is : %d \n" ,root1); // printing of the roots
printf("The second root is : %d \n" ,root2);
     return 0;
}
