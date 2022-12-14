/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: (Lab test - 1) - Set-A
Description : Program to print out a pattern based on user input
*/

#include <stdio.h>
int sum(int a)
{
	int sum = 0,k;
	for(k = 1;k <= a;k++)
		{
			sum = sum + k;
		}
		return a;
}

int main()
{
	int num,i,j;
	printf("Enter a number from 2 to 10:");
	scanf("%d",&num);
	printf("%d\n",1);
	for(i = 1;i <= num;i++)
	{
		for(j = sum(i) + i;j <= (sum(i) + 2*i);j++)
			{
			//	if(j <= i)
					printf("%d ",j);
			}
			printf("\n");
	}
	return 0;
}
