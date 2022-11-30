/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 4
Description : To print factors of a number
*/
#include<stdio.h>
int main()
{
int num,i;
printf("Enter any number :- ");  // take any integer from user
scanf("%d",&num);
if(num<0)			// check whether the integer is negative or positive
{
for(i=1;i>=num;i++)		//checking factors using for loop
{
if(num%i==0)
{
 printf("%d\t",i);		// print the factors
}
}
}
for(i=1;i<=num;i++) 		// checking factors using for loop
{
if(num%i==0)
{
 printf("%d\t",i);		//print factors
}
}

return 0;
}
