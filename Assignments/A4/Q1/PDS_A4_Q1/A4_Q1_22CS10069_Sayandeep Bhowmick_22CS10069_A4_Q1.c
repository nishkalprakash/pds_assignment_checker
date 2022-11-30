/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 4
	Description : Checks whether a number is a factor of a given number and prints the same
*/
#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	if(num==0)
	{
		printf("The factor of the number 0 is 0\n");
		return 0;
	}
	printf("The factors of the number %d are 1",num);
	if(num<0)
		num=-num;
	for(int i=2; i<num; i++)
		if (num%i==0)										/*We print various parts separately so that the output format is proper*/
			printf(", %d",i);
	printf(" and %d \n", num);
	return 0;
}