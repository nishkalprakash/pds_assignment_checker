/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: Lab Test Q2
Description : print the given pattern
*/
#include<stdio.h>
int main()
{
int i,j,k,n; //declaring variables
printf("Enter any integer between 2 to 10:- "); //getting the number of lines user wants to print
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)	//printing pattern using for loop
	{
	printf("%d",i);
	}
	printf("\n");
}
return 0;
}
