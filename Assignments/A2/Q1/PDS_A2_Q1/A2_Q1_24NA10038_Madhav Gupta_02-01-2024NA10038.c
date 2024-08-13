//Program to Read an integer n from the user
//to compute the sum of integers till n
//to compute the sum of squares of integers till n
//to compute the sum of digits of n and print all of them
//Core Creator: Madhav Gupta
//Roll no.: 24NA10038
#include<stdio.h>
int main()
{
int n, S1, S2, S3;
printf("What is %d/n", n);
scanf("%d", &n);
S1=n*(n+1)/2;
S2=n*(n+1)*(2*n+1)/6;
S3=(n/100)+(n-(n/10)*10)+(n-((n/100)*100))/10;//this is for calculating sum of digits by taking advantage of fact that all numbers are defined integers
scanf("%d, %d, %d", &S1, &S2, &S3);
printf("These are %d, %d, %d", S1, S2, S3);
}

