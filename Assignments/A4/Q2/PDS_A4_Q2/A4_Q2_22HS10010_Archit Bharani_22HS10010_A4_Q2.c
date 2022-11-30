#include<stdio.h>
int main()
{
//To calculate the sum of digit 
int n,sum=0;
printf("Enter a integer: ");
scanf("%d",&n);
while(n!=0) {
sum =sum+(n%10);
n/=10;
}
printf("Sum of the digits is %d\n",sum);
return 0;
}
