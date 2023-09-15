// Name : Bhoomik Modi
// Roll_No. : 23PH10013
#include <stdio.h>
#include <stdlib.h>
int main(){
	int ran;
	printf("Enter the numbers of random data entry to be done(<=50) : ");
	scanf("%d",&ran);
	int numbers[ran-1];
	for (int i=0;i<ran;++i)// Entering the random value
	{
		numbers[i]=(rand()%91)+10;
		printf("%d\t",numbers[i]);
	}
	int b;//dummy variable to store temp value
	int interchange=0;
	for (int i=2;i<ran;i+=2)
	{
		if (numbers[i-2]>numbers[i])//sorting
		{
			b=numbers[i-2];
			numbers[i-2]=numbers[i];
			numbers[i]=b;
			++interchange;
		}
	}
	printf("\nThe interchanged are:\n");
	for (int i=0;i<ran;++i)// Final array is printed
	{
		printf("%d\t",numbers[i]);
	}
	printf("\n");
	printf("The no. of interchanges are = %d\n",interchange);
	return 0;
	}
	
