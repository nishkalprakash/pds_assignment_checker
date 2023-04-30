#include<stdio.h>
void main()
{
int n,s=0,i;
printf("Enter a no.: ");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
s++;
}
(s==0) printf("The no. %d is a Prime no.\n",n) : printf("The no. %d is NOT a Prime
no. \n",n);
}
