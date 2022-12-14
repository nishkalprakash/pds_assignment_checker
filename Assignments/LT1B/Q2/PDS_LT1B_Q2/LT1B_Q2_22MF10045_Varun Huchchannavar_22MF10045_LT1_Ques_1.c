/* Varun Huchchannavar
Section 14
22MF10045 */
/* This program will print a pattern based on the input given by the user */
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	int num_1;
	int i;
	int j;
	printf("Enter the number");
	scanf("%d",&num_1);
	if(num_1<2)
	{printf("Invalid input");}
	if(num_1>10)
	{printf("Invalid input");}
	if(num_1>=2 && num_1<=10)
	{
	for(i=1;i<=num_1;i++)
	{
	for(j=1;j<=i;j++)
	{
	printf("%d",i);
	}
	printf("\n");
	}
	}
	return 0;
	}
