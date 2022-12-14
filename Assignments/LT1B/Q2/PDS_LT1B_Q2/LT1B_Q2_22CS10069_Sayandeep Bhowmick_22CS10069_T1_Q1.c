/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Test 1
	Description : Printing the given pattern
*/
#include <stdio.h>

int main()
{
	int rows;
	printf("Enter the number of rows(Remember 1<N<11) : ");
	scanf("%d",&rows);
	if(rows<2 || rows>10)				//Checks whether the entered value is correct else terminates the program
	{
		printf("Invalid Input\n");
		return 0;
	}
	for(int i=1; i<=rows;i++)
	{
		for(int j=1; j<=i;j++)
			printf("%3d",i );				//%3d ensures the output has proper spaces
		printf("\n");
	}
	return 0;
}
