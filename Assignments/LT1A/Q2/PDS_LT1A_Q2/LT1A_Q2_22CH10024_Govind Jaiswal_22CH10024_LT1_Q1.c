/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
Lab test 1 : Set-A
Description : Program to print a specific number pattern
*/

#include <stdio.h>

int main()
{
	int num,i,j;
	printf("Enter a number in the range [2,10] :\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)     // i loop for rows
	{
		for(j=1;j<i;j++)     // j loop for columns
		{
			printf("%d ",i+j);
		}
		printf("\n");
	}
	return 0;
}
