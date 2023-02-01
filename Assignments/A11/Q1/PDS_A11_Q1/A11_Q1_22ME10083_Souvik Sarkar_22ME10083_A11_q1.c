/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	Assignment: 11
*	Question no.:1
*	
*/
//programme to calculate the sum using recursion
#include<stdio.h>
#include<stdlib.h>
//global varriable for calculating the result
//creating recursive function
float recsum(int data)
{
	if(data==1)
		return 1;
	else
		sum = 1.0/data + recsum(data-1);// main logic
		return sum;	
}
void main()
{
	// Declaring varriables
	int n;
	float k;
	printf("enter the no.(except 0) :\n");
	scanf("%d",&n);
	k=recsum(n);
	//result
	printf("The value of the haronic series is : %f",k);
}