//Program to sort an array
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>

int n,m;
int A[101];
void sort(int A[n]);

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
	
	
	
	printf("Enter M: ");
	scanf("%d",&m);
	
	int i=0;
	while(i<n)
	{
		if(A[i] > m)
		{
			for(int j = n-1; j>=i; j--)
			{
				A[j+1] = A[j];
			}
			A[i] = m;
			break;
		}
		
		if(A[n-1] <= m)
		{
			A[n] = m;
			break;
		}
		i++;
	}
	
	printf("Output Array: [");
	for(int i = 0; i<=n; i++)
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
			if(A[j] > A[j+1])
			{
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}
