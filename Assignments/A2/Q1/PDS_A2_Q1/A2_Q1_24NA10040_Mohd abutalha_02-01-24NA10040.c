#include<stdio.h>
int main()
{
   //program to calculate sum of the series 
   //code creator :Mohd Abutalha
   //roll no: 24NA10040
   double s1,s2,s3;
   int n;
   printf("enter n:");
   scanf("%d", &n);
   s1= n*(n+1)/2;
   s2= n*(n+1)*(2*n+1)/6;
   s3= (n/100)+(n%100)/10 + n%10 ;
   printf("%lf,%lf,%lf",s1,s2,s3);
   return 0;
}
