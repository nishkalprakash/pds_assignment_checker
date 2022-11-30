#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 3
	Description : Reversed Number Name of a Number
*/


int main()

{
	long int num;							// declaration of variable to store integer
	
					
	printf("Enter number : ");				// input number from user
	scanf("%ld",&num);							
	
	while (1)
	{
			
		switch (num%10)					
		{
			case 0: printf("Zero ");break;
			case 1: printf("One "); break;
			case 2: printf("Two "); break;
			case 3: printf("Three "); break;
			case 4: printf("Four "); break;
			case 5: printf("Five "); break;
			case 6: printf("Six "); break;
			case 7: printf("Seven "); break;
			case 8: printf("Eight "); break;
			case 9: printf("Nine "); break;
			
		}
		num=num/10;
		if (num==0) break;					// created this for input = 0
	
	}

	return 0;
}
