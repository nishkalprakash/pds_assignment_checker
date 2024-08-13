//Program to compute sum of the series
//Code Creator: Pratibha Shakya
//Roll No.: 24NA10050

#include <stdio.h>

int main()
{
int n, S1, S2, S3;
scanf("%d", &n);
S1=(n*(n+1))/2;	//sum of first n natural numbers
S2=(n*(n+1)*(2*n+1))/6;	//sum of squares of first n numbers
S3=n/100+(n%100)/10+n%10; //using arithmetic operators to find digits
printf("S1=%d \nS2=%d \nS3=%d", S1, S2, S3);

return 0;
}
