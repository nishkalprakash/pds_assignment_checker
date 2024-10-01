//Program to divide elements into bins
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>

int findMin(int a[], int n);
int findMax(int a[], int n);

int main()
{
	int bins,n;
	printf("Enter N:\n");
	scanf("%d", &n);
	
	int a[n];
	printf("Enter numbers:\n");
	for(int i =0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter bins:\n");
	scanf("%d", &bins);
	
	
	for(int i =0; i<bins; i++)
	{
		printf("bin%d -> ", (i+1));
		for(int j =0; j<((findMax-findMin) / bins); j++)
		{
			printf("%d,", a[j + ((findMax-findMin) / bins)*i]);
		}
		
	}
	
	return 0;
}

int findMin(int a[], int n)
{
	int min = a[0];
	for(int i = 0; i<n; i++)
	{
		if(a[i] < min)
			min = a[i];
	}
	return min;
}

int findMax(int a[], int n)
{
	int max = a[0];
	for(int i = 0; i<n; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}
