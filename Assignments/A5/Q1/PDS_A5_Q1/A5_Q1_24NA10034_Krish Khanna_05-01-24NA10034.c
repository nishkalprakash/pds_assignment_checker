#include <stdio.h>
#define N 100 /*declaring a constant*/
int main()
{
	int n,i,j,temp,k=0;
	int inumbers[N]; /*declaration of array.*/
	printf("\nPlease input the number of elements:");
	scanf("%d", &n);
	if(n>100) printf("Please input the value less than or equal to 100.");/*if n is greater than 100*/
	printf("\nPlease input the elements of the array:");
	for(i=0 ; i<n ; i++ ) /*Asking the user to initialize the array values */
	{
		scanf("%d", &j);
		inumbers[i]=j;
	}
	printf("\nOriginal Array:");
	for(i=0 ; i<n ; i++ )/*Printing the original array */
	{
		printf("%d ", inumbers[i]);
	}
	printf("\nRearranged Array:");
	for(i=0, j=0; i<n ; i++)/*rearrangement by swapping */
	{	
		if(inumbers[i]<0)
		{
			temp=inumbers[j];
			inumbers[j]=inumbers[i];
			inumbers[i]=temp;
			j++;
		}
		
	}
	for(i=0 ; i<n ; i++ )/*Printing the rerranged array. */
	{
		printf("%d ", inumbers[i]);
	}
	
	return 0;
}
