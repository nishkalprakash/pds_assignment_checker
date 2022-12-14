/* Varun Huchchannavar 
	Section 14
	22MF10045
	*/
/* This program will prompt the user to enter a sequence of positive
	integer values and display the two largest values so far entered */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num_1;
	printf("Enter the number of terms to be inserted in the array");
	scanf("%d",&num_1);
	int array[num_1];
	int i;
	int j;
	printf("Enter the numbers");
	for(i=0;i<num_1;i++)
	{
	scanf("%d",&array[i]);
	if(array[i]<0)
	{ return 0;}
	}
	// The numbers are inputted in the array
	if(num_1==1)
	{
	printf("Largest number :%d \n",array[0]);
	printf("Second largest number: Value not entered \n");
	}
	
	int max;
	int second_max;
	max=0;
	for(i=0;i<num_1;i++)
	{
	if(array[max]<array[i])
	max=i;
	}
	printf("Largest number:%d \n",array[max]);
	second_max=0;
	for(i=0;i<num_1;i++)
	{
	for(j=0;j<max;j++)
	{
	if(array[i]<array[max] && array[i]>array[j])
	{second_max=i;}
	}
	}
	printf("Second largest number:%d",array[second_max]);
	return 0;
	
}
	
	

	
