/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:1
finding sum of harmonic series using recursions */
#include<stdio.h>
float harmonic(int n)
{
if(n==1)
return 1.0;
else
return(1.0/n+harmonic(n-1));
}
int main()
{
int n;
printf("Enter number of terms:");
scanf("%d",&n);
printf("%.3f",harmonic(n));
return 0;
}

