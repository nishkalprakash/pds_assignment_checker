#include <stdio.h>
int main()
{
int n,S1,S2,S3;
printf("Enter the value of n : ");
scanf("%d",&n);
S1= (n)*(n+1)/2;
//sum of first n natural numbers
S2= (n)*(n+1)*(2*n+1)/6;
//sum of squares of first n natural numbers
int d1,d2;
d1= n%100;
d2= n%10;
S3= d2 + (n-d1)/100 + (d1-d2)/10;
printf("S1 = %d\nS2 = %d\nS3 = %d",S1,S2,S3);
return 0;
}
