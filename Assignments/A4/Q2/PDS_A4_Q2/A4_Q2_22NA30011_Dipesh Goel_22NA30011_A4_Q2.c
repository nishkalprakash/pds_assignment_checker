#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 2
	Description : Sum of digits of a number
*/


int main()

{
	int num,sum=0;								// Declaring variables										

	printf("Enter number : ");					// taking Input from User
	scanf("%d",&num);

	
	while (num!=0)								// Using while loop for suming up digits
	{
		sum=sum + num%10;						// Extracts the last digit and adds to sum
		num=num/10;								// Eliminates the last digit which was added
	}
	printf("%d\n",sum);							// Displays the final sum of digits
	return 0;
}
