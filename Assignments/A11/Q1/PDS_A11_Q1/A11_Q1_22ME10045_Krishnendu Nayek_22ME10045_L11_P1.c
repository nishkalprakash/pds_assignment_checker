#include<stdio.h>
float sum(int n)
{
float s;
if(n==1)
s=1.0;
else
s=1.0/n + sum(n-1);
return s;
}


int main()
{
int n;
printf("\n Enter the number of terms:");
scanf("%d",&n);
printf("\n The sum of the harmonic series is %f",sum(n));
return 0;
}


