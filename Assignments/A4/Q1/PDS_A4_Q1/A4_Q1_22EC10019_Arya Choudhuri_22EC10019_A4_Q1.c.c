/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to print factors of a number
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("Enter number whose factors are to be found out:\n");
	scanf("%d",&num);
	printf("The factors are:\n");	
	num = abs(num);
	
	int i;
	for ( i=1 ; i<=num ; i++)
	{
		if (num%i==0)
		{
			printf("%d ",i);
  		}
	}
	return 0;
}

