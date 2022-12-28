/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 6
Description : Program to compute nth term of a series using recursion
*/

#include<stdio.h>

int print_term(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else if(n == 2)
		return 2;
	else
		return 3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3) + 1;
}

int main()
{
	int k,i;
	printf("Enter the number of terms:  ");
	scanf("%d",&k);
	if(k < 0)
		printf("Invalid input");
	for(i = 0;i < k;i++){
		printf("%d",print_term(i));
		if(i < k-1)
			printf(",");
	}
	printf("\n");
	return 0;
}
