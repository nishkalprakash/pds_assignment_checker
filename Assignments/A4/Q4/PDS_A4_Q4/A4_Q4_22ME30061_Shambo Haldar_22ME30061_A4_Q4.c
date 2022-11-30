/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 4
Description : Program to print out a pattern based on the user input
*/

#include<stdio.h>

int main()
{
	int n,i,j;
	printf("Enter number of lines of the pattern: ");
	scanf("%d",&n);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= i;j++){
			if (j % 2 == 0)
				printf("0");
			else 
				printf("1");
		}
		printf("\n");
	}
	return 0;
}

