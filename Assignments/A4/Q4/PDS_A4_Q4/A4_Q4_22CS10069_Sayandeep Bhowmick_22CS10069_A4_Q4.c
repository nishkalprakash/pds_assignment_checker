/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 4
	Description : Prints a pattern with number of rows as per users choice
*/
#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number of rows. Number should be between 2 and 10 \n");
	scanf("%d", &num);
	if (num<2 || num>10)
	{
		printf("Wrong Input!!!!\n");
		return 0;
	}
	for (int i=1; i<=num; i++)						
	{
		for (int j=1; j<=i; j++)
			if (j%2==1)
				printf("1 ");					//checks the column number and prints 0 and 1 accordingly
			else
				printf("0 ");
		printf("\n");
	}
	return 0;
}
