#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 4
	Description : Printing a Pattern
*/


int main()

{
	int i,j,n;										// Declaring variables

	printf("Enter number : ");						// taking Input from User
	scanf("%d",&n);


	for (i=0;i<n;++i) 								// Loop for new row of pattern
	{
		for (j=0;j<=i;++j)							
		{											// Loop for printing 
				if (j%2==0) printf("1");			// new character in each row
				else printf("0");					// as per pattern
				
		}
		printf("\n");								// Next line after finishing one row
	}
	return 0;
}
