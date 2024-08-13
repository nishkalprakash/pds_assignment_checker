//Program to read an integer from the user in an integer variable n
//Program to compute the sum of the following series in an integer variable S1
//Program to compute the sum of the following series in a long variable S2
//Program to compute the sum of t+1he digits of n in an integer variable S3sum of 
//Code creator :m.yasaswitha
//roll no:24NA10037
#include<stdio.h>
int main()
{
int n;
long S1,S2,S3;
scanf("%d",&n);
//printf("\n %ld",n);
S1=n*(n+1)/2;
printf("S1 = %ld",S1);
S2= n*(n+1)*(2*n+1)/6;
printf("\n %ld",S2);
S3= n%10+ n/10%10+n/100%10;
printf("\n %ld",S3);
}
