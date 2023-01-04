	/* Name: Varun Huchchannavar
	   Section: 14
	   Roll Number: 22MF10045 */
	
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	int num_1; // num_1 is the number of elements before adding
	scanf("%d",&num_1);
	int array[num_1+1];
	int i;
	for(i=0;i<num_1;i++)
	{
	scanf("%d ",&array[i]);
	}
	// The array has been initialized
	scanf("%d",&array[num_1]);
	printf("array=");
	int j,c,min;
	for(i=0;i<num_1+1;i++)
	{
	min=i;
	for(j=i+1;j<num_1+1;j++)
	{ if(array[min]>array[j])
		{min=j;}}
	c=array[i];
	array[i]=array[min];
	array[min]=c;}
	for(i=0;i<num_1+1;i++)
	{printf("%d ",array[i]);}
	return 0;
	}
	
	 

	
