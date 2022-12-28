/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment 6
*/
#include <stdio.h>

int prime_term(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return(3*prime_term(n-1)*prime_term(n-2)-2*prime_term(n-2)*prime_term(n-3)+1);
}

int main()
{
	int k;
	printf("Enter the number of terms to be displayed : ");
	scanf("%d",&k);
	if (k<0)
	{
		printf("Invalid Input\n");
		return 0;
	}
	for(int i=0;i<k-1;i++)
		printf("%d , ",prime_term(i));
	printf("%d\n",prime_term(k-1));
	return 0;
}
