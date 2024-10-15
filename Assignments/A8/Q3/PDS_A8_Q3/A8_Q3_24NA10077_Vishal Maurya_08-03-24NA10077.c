//Program to sort an array such that it gives largest possible int
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>

int n;
int A[100];
void sort(int A[n]);
int digits (int n, int count);
int FD (int n, int digits);

int main()
{
	printf("Enter N: ");
	scanf("%d",&n);
	
	printf("Enter Array: ");
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
	
	sort(A);
	
	
	printf("Output Array: [");
	for(int i = 0; i<n; i++)
	{
		printf("%d, ", A[i]);
	}
	printf("]");
	
	return 0;
}

void sort(int A[n])
{
	for(int i = 0; i<n+1; i++)
	{
		for(int j = 0; j<n-1; j++)
		{
			if(A[j] < A[j+1])
			{
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	
	for (int i = 0; i<n-1; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if(FD(A[i],digits(A[i],0)) == FD(A[j],digits(A[j],0)))
			{
				int temp = A[j];
				for(int k = j-1; j>=i; j--)
				{
					A[k+1] = A[k];
				}
				A[j-1] = temp;
			}
		}
	}
}

int digits(int n, int count)
{
	n = n/10;
	if(n!=0)
	{
		count++;
		digits(n,count);
	}
	if(n==0)
	{
		count++;
		return count;
	}
}

int FD (int n, int digits)
{
	int FD = n;
	for (int i = 1; i<digits; i++)
	{
		FD = FD/10;
	}
	return FD;
}

