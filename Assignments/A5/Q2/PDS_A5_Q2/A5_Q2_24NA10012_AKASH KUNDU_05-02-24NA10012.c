//program to read numbers into an array and eliminate duplicates
//Akash Kundu
//24NA10012

#include<stdio.h>
#define N 100		
int main()	{
	int A[N];
	int n,count,i,j,b;	//b is buffer variable
	scanf("%d", &n);
	if (n>N)	{
	printf("Error: n>100");
	return 0;}
	for (count=0; count<n; count++)
		scanf("%d", &A[count]);
	printf("Original Array: ");
	for (count=0; count<n; count++)
		printf("%d ", A[count]);
	
	printf("Duplicates:\n");
	for (i=0; i<n; i++)
	{	for (j=0,count=0; j<n; j++)	
		{	if (A[j]==A[i]) 
			{	count+=1;
				if (count>1)
				{	b=A[i];
					A[i]=A[n];
					A[n]=b;
					n-=1;
				}
			}
		}
		if (count>1)
		{	printf("\t %d (%d)\n", A[i], count);
			
		}
	}
	
	printf("Unique array: ");
	for (count=0; count<n; count++)
		printf("%d ", A[count]);
	
	return 0;
}
