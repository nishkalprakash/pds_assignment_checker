//Program to compute the sum of the series
//Code Creater: Vedant Wakale
// Roll NO : 24NA10079
#include<stdio.h>
int main()
{
int n, S1, S2, S3;
printf("*\n Enter the Number");
scanf("%d",&n);


S1 = (n*(n+1))/2;

printf("S1 value:%d \n" , S1);

S2 = (n*(n+1)*(2*n+1))/6;

printf("S2 value:%d \n" ,S2);

S3 = (n%10 + (n/10)%10 + ((n/10)/10%10));

printf("S3 value :%d \n",S3);


return 0;
}
