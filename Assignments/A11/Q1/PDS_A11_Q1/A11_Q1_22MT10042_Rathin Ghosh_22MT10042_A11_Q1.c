#include<stdio.h>
float SUM(int n)
{
float sum=0.0;
if (n==1)
return 1.0;
else
sum=(1.0/n)+SUM(n-1);
return sum;
}
int main()
{
int N;
printf("Enter the number of terms in the series = ");
scanf("%d",&N);
printf("The sum of the series = %f",SUM(N));
return 0;
}
