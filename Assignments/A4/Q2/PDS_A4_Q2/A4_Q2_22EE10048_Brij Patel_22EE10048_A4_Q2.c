/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 4

Description-Sum of digits

*/
#include <stdio.h>
int main()
{
int n,rem=0,sum=0;
printf("Enter a number\n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("Sum of digits= %d",sum);
return 0;
}
