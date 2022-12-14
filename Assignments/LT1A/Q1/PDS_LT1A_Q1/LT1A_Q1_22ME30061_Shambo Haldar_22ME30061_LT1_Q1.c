/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: (Lab test - 1) - Set-A
Description : Program to find perfect numbers upto to an input integer
*/

#include <stdio.h>

int main()
{
	int num,sum = 0,i,j;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num <= 1)
		printf("Invalid Input");
	else
	{
		for(i = 2;i <= num;i++)
		{
			sum = 0;
			for(j = 1;j <= i;j++)
			{
				if(i % j == 0)
					sum = sum + j;
			}
			if(sum == i)
				printf("%d ",i);

		}

	}
	return 0;
}
