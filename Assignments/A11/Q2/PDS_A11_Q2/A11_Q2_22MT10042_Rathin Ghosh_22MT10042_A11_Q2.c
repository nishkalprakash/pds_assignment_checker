#include<stdio.h>
int fibonacci(int n,int x)
{
int term=0;
if (n==1)
return 0;
if (n==2)
return 1;
if(n>2)
term=fibonacci(n-1,x)+fibonacci(n-2,x);
if (term==x)
return 1;
else
return 0;
}
int main()
{
int N;
printf("Enter the term to be checked : ");
scanf("%d",&N);
if (fibonacci(100,N)==1)
printf("Yes");
else
printf("No");
return 0;
}



