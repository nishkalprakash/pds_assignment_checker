/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:11
Description: Program to check if given number is fibonacci or not.
*/

#include<stdio.h>
int fibo(int n)              //method to find nth fibonacci number recursively
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n,i=0, f=0;
	printf("Enter the number to be checked\n");
	scanf("%d",&n);     //asking user to input number to be checked and storing it
	while(fibo(i)<=n)   //loop continues till the ith fibonacci number is less than the number
	{
		if(n==fibo(i))
		{
			printf("Yes");
			f=1;
			break;    //if number is fibonacci loop terminates
		}
		i++;
	}
	if(f!=1)
		printf("No");   //if number is not fibonacci
	return 0;
}