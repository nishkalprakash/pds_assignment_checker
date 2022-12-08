/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:5
Description: Program to create a guessing game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int n;
	printf("Please enter vaue of N");
	scanf("%i",&n);
	int ar[n];
	int i;// declaration of variables
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}// inputs acquied
	int max= ar[i];int min=ar[i];
	for(i=0;i<n;i++)
	{
		if(ar[i]>max)
			max=ar[i];
		if(ar[i]<min)
			min=ar[i];
	}//loop run for the elements
	int bins;
	printf("Please specify no of bins");
	scanf("%d",&bins);
	int difference= max- min +1;
	int range= ceil(difference/bins);
	int r[bins*2];// declaration of variables required for further calculations
	r[0] = min;
	for(i=1;i<bins*2;i++){
		if(i%2!=0)
			r[i]=r[i-1] + range - 1;
		else
			r[i]=r[i-1]+1;
	}
	int c=1;
	for(i=0;i<bins*2;i=i+2)
	{
		printf("bin %d",c);
		for(int j=0;j<n;j++)
		{
			if(ar[j]>=ar[i]&&ar[j]<=ar[i+1])
				printf("%d",ar[j]);
		}// Output printed
		c++;
		
	}
	return 0;
}