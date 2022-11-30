/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 4
Description : Program to read an integer number and print the sum of its digits
*/

#include<stdio.h>

int main()
{
	int num,sum;
	sum = 0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num != 0){
		sum += num%10;
		num /= 10;
	}
	printf("%d",sum);
	return 0;
}

