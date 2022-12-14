/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Test 1
	Description : Checking whether a number is an Amstrong number
*/
#include <stdio.h>
#include <math.h>

int amstrong(int n,int d)		//Calculates the sum of digit^number of digits
{
	int sum=0;
	while(n>0)
	{
		sum+=pow((n%10),d);
		n/=10;
	}
	return sum; 
}

int main()
{
	int num;
	printf("Enter the number(Remember 0<N<10^6) : ");
	scanf("%d",&num);
	if(num<1 || num>999999)				//Checks whether the entered value is correct else terminates the program
	{
		printf("Invalid Input\n");
		return 0;
	}
	printf("The Amstrong numbers in the range are : ");
	for(int i=1;i<=num;i++)
	{
		int count=0,k=i;
		while(k>0)				//Calculates the number of digits in the number
		{
			count++;
			k/=10;
		}
		if(amstrong(i,count)==i)			//By definition of Amstrong number
			printf("%d  ",i );
	}
	printf("\n");
	return 0;
}
