//section 14
//Roll no : 22EC30027
//Name:Karthik
//Assignment no:4
//Description:To print the sum of digits of a given number


#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the number to obtain the sum of is digits:");
scanf("%d",&n);
while(n!=0)
{
sum = sum+(n%10);
n=n/10;
}
printf("the sum is:%d",sum);
return 0;
}
