/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to print a pattern
*/

#include <stdio.h>

int main()
{
	int i;
	printf("Number of rows of pattern:");
	scanf("%d",&i);

	int row,column;
	for ( row=1 ; row<=i ; row++)
	{
		for ( column=1; column<=row ; column++ )
		{
			if ( column%2 == 1 )
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}

