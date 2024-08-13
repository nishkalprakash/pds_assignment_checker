/*Program to compute the sum of n natural numbers 
and their square of the numbers*/
// Code Creator: Sai Ganesh

#include <stdio.h>
int main()
{
           int a, s1, s2, s3, x, y, z;
           printf("Enter a positive integer:\n");
           scanf("%d", &a);
           s1 = a * (a+1) * 0.5 ;  // using formula of sum of natural numbers
           s2 = (a * (a+1) * ((2 * a) + 1))/6;  //using maths formula for sum of squares of natural numbers
           x = (a % 10); //using modulus function to obtain the remainder
           y = ((a % 100) - x)/10;
           z = (a - x - y)/100;
           s3 = x + y + z;
           printf("The value of s1, s2, s3 respectively are %d, %d, %d\n", s1, s2, s3);
           return 0;
} 
