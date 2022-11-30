#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 1
	Description : Displaying factors of a number
*/


int main()

{
	int num,i;												// Declaring variables									

	printf("Enter number : ");								// taking Input from User
	scanf("%d",&num);

	if (num>0)												// Case: Number is positive
		{for (i=1;i<=num;i++)
			{if (num%i==0) printf("%d ",i);}
		}
	else if (num<0)											// Case: Number is negative
		{for (i=1;i<=(-num);i++)
			{if (num%i==0) printf("%d ",i);}
		}
	else printf("0");										// Case: Number is zero
	return 0;
}
