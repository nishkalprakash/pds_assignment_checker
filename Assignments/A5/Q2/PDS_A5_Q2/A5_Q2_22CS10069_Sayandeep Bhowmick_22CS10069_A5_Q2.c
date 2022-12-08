/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 5
	Description : Checks pairs of Co-Prime in an array
*/
#include <stdio.h>

int gcd(int a,int b)
{
	int min=(a>b)?b:a;
	while((a%min)!=0 || (b%min)!=0 )
		min--;
	return min;
}

int flag=0, bool=0;

void CoPrime (int a, int b)
{
	if(gcd(a,b)==1)
		flag=1;
	else
		flag=0;
}

void pair(int A[])
{
	for (int i=0; i<4; i++)
		for(int j=i+1; j<5; j++)
		{
			CoPrime(A[i],A[j]);
			if(flag==1)
			{
				printf("%d and %d are Co-Prime \n",A[i],A[j]);
				bool=1;
			}
		}
}

int main()
{
	int A[5];
	printf("Enter the 5 elements of the array : ");
	for(int i=0; i<5; i++)
	{	
		scanf("%d",&A[i]);
		if(A[i]<0)
		{
			printf("WRONG INPUT!!!!\n");
			return 0;
		}
	}
	pair(A);
	if (bool==0)
		printf("No Co-Prime found \n");
	return 0;
}
