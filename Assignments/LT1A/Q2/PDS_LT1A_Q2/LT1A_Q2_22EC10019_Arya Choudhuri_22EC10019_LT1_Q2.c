/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Test No. : 1
	Description : Program to print pattern
*/

#include <stdio.h>

int main()
{
	int n;

	printf("Enter number of rows of pattern(in range [2,10]):  ");
	scanf("%d",&n);

	if (n<0)
		printf("Invalid input");
	
	int row , column , i = 1 ; 	// the i variable will take the integers one by one
	
	for ( row = 1 ; row <= n ; row++)	// we have n rows
	{
		for ( column = 1 ; column <= row ; column++) // this takes control over the columns
		{
			printf("%d " , i);	// prints integers
			i++;			// necessary updation
		}
		
		printf("\n");
	}

	return 0;
}

	
	
	

