/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	Assignment: 11
*	Question no.:2
*	
*/
//programme to 
#include<stdio.h>
#include<stdlib.h>
//global varriable initializaton
int n;
//int arr[100];
int fib(int data)
{
	int sum=0;
	for(;sum!=n;)
	{
		if(data==0)
			return 0;
		else if(data==1)
			return 1;
		else if(data==2)
			return 1;
		else
		{
			sum=fib(data-1)+fib(data-2);

		}
	}
	printf("%d ",sum);	
	return 0;
}
void main()
{
	int k;
	printf("Enter the no.:\n");
	scanf("%d",&n);
	fib(n);
}