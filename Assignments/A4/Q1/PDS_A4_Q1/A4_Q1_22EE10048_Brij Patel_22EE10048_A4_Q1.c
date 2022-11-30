/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 4

Description-Find the Factors

*/


#include<stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
if(n<0)
n=-n;
for(int i=1;i<=n;i++)
{
if(n%i==0)
printf("%d ",i);
}
return 0;
}
