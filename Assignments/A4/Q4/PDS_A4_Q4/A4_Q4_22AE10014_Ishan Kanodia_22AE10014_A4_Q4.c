/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 4
Description : program that prints a pattern based on the user input */

#include <stdio.h>
int main()
{
	int a;
	printf("Enter the required number in the range[2,10] : ");
	scanf("%d",&a);//Taking input

	if(a>10 || a<2)
		printf("Invalid input");
	if(a==2)
		printf("1\n1 0\n");
	if(a==3)
		printf("1\n1 0\n1 0 1\n");
	if(a==4)
		printf("1\n1 0\n1 0 1\n1 0 1 0\n");
	if(a==5)
		printf("1\n1 0\n1 0 1\n1 0 1 0\n1 0 1 0 1\n");
	if(a==6)
		printf("1\n1 0\n1 0 1\n1 0 1 0\n1 0 1 0 1\n1 0 1 0 1 0\n");
	if(a==7)
		printf("1\n1 0\n1 0 1\n1 0 1 0\n1 0 1 0 1\n1 0 1 0 1 0\n1 0 1 0 1 0 1\n");
	if(a==8)
		printf("1\n1 0\n1 0 1\n1 0 1 0\n1 0 1 0 1\n1 0 1 0 1 0\n1 0 1 0 1 0 1\n1 0 1 0 1 0 1 0\n");
	if(a==9)
		printf("1\n1 0\n1 0 1\n1 0 1 0\n1 0 1 0 1\n1 0 1 0 1 0\n1 0 1 0 1 0 1\n1 0 1 0 1 0 1 0\n1 0 1 0 1 0 1 0 1\n");
	if(a==10)
		printf("1\n1 0\n1 0 1\n1 0 1 0\n1 0 1 0 1\n1 0 1 0 1 0\n1 0 1 0 1 0 1\n1 0 1 0 1 0 1 0\n1 0 1 0 1 0 1 0 1\n1 0 1 0 1 0 1 0 1 0\n");

return 0;
}
