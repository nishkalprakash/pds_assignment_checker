// Name : Bhoomik Modi
// Roll_No. : 23PH10013
#include <stdio.h>
#include <stdlib.h>
int main(){
	int ran;
	printf("Enter the numbers of random data entry to be done(<=50) : ");
	scanf("%d",&ran);
	int numbers[50];
	for (int i=0;i<ran;++i)// entering the random values
	{
		numbers[i]=(rand()%41)+10;
		printf("%d\t",numbers[i]);
	}
	printf("\nTriplets\tIndices\tValuestored\n");
	
	for (int i=0;i<ran;i++)
	{
		for (int j=i+1;j<ran;j++)
		{
			for (int k=j+1;k<ran;k++)//So that no triplet is related
			{
				if (numbers[i]+numbers[j]+numbers[k]==60)// Checking if the sum is 60
				{
					printf("(%d,%d,%d)\t (%d,%d,%d)\t%d,%d,%d\n",numbers[i],numbers[j],numbers[k],i,j,k,numbers[i],numbers[j],numbers[k]);
				}
			}
		}
	}
	printf("\n"); 
	return 0;
	}
