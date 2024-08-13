//Program to compute the sum of series
//Program creator Shatakshi Shukla
//roll no. 24NA10067
#include <stdio.h>            
int main()
{
   int n,S1,S2,S3;
   int a,b,c;
   printf("Enter the number:");
   scanf("%d",&n);
          //formula for calculating the sum of series
   printf("THE SUM OF THE SERIES S1:%d",((n)*(n+1))/2);
       //formula for calculating the squares of them
   printf("\nThe sum of squares of the series is S2:%d",(n*(n+1)*(2*n+1))/6);
   a=n%10;    //for one's digit
   b=n/100;   //hundreds digit
   c=(n/10)%10;
   printf("The sum of digits:%d",a+b+c);
   
}
   
   
   
