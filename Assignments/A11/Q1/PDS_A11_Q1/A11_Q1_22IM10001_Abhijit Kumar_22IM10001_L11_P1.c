#include<stdio.h>
int n;
float SumHP(int n)
{
float t;
if(n==1)
t=1;
else
t=1.0/n + SumHP(n-1);
return t;
}
int main()
{
printf("Enter the number of terms you want :- ");
scanf("%d",&n);
printf("\n The sum of the %d elements of the hp is %f ",n,SumHP(n));
}
