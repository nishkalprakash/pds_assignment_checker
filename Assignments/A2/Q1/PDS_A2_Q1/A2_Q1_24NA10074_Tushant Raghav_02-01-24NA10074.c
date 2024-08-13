// Program to compute the sum of series
// Code Creater: Tushant Raghav
// Roll NO: 24NA10074

#include <stdio.h>
int main ()
{
   int n, S1, S2, S3, R1, R2,R3, Q1, Q2, Q3 ;
   printf("Enter the number: ");
   scanf("%d",&n );
   S1=((n)*(n+1)/2);
   printf("Sum of numbers is %d,\n", S1);
   S2=((n)*(n+1)*(2*n+1)/6);
   printf("The sum of squares of numbers from 1 to %d,%d,\n", n,S2);
   R1=n%10 , Q1=n/10 ;
   R2=Q1%10 , Q2=Q1/10;
   R3=Q2%10 , Q3=Q2/10;
   S3= R1+R2+R3 ;
   printf("Sum of the digits is %d,\n", S3);
   return 0;
}
