//program calculates and prints the factors of a number entered by the user.

#include<stdio.h>
int main()
{
int n,i;
printf("Enter any number :");
scanf("%d",&n);
printf("The factors of %d are ",n);
for(i=1;i<=n;i++)
{
if (n%i==0)
printf("%d ",i);
}
return 0;
}
