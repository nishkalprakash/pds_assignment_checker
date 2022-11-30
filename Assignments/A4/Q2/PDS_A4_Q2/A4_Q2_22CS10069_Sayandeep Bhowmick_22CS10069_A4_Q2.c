/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 4
	Description : Takes a number as input and prints the sum of digits
*/
#include <stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter a number\n");
	scanf("%d", &num);
	printf("The sum of the digits of the number %d is ",num);
	if(num<0)
	{
		printf("-");								//prints a - before the sum
		num=-num;
	}
	while(num>0)
	{
		sum+=num%10;								//calculates the sum of digits
		num/=10;
	}
	printf("%d\n",sum);
	return 0;
}