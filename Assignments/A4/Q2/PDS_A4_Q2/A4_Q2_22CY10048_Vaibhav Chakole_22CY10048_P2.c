/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 4
Description : to print sum of the digits of entered number
*/
#include<stdio.h>
int main()
{
int num,sum=0,i;
printf("Enter any number :-");  // take any integer from user
scanf("%d",&num);
while(num!=0)
{
i=num%10; 			//finding remainder of a entered number
sum=sum+i;			//sum of digits of entered number
num=num/10;
}
printf("sum of digits = %d", sum);	//printing sum of digits of a given number
return 0;
}
