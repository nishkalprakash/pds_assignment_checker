/*
NAME:AJMEERA UDAY KIARN
ROLL NO:22CY10008
SECTION:14
ASSIGNMENT:11
Description:
*/
#include<stdio.h>

float harmonic_sum(int n)
{
if (n == 1)
return 1.0;
else
return(1.0/n) + harmonic_sum(n-1);
}
int main()
{
int n;
printf("enter the value of n:");
scanf("%d", &n);
printf("sum of the harmonic series %d: %lf",n, harmonic_sum(n));
return 0;
}
