//program to read n elements into an array and rearranging them
//Akash Kundu
//24NA10012

#include<stdio.h>
#define N 100		
int main()	{
	int A[N];
	int n,count,i,b;	//b is buffer variable
	scanf("%d", &n);
	if (n>N)	{
	printf("Error: n>100");
	return 0;}
	for (count=0; count<n; count++)
		scanf("%d", &A[count]);
	printf("Original Array: ");
	for (count=0; count<n; count++)
		printf("%d ", A[count]);
	
	for (count=0; count<n; count++)
	{	for (i=0; i<n; i++)	
		{	if (A[i]>=0){
				if (i>n-1)
					if (A[i+1]<0)	{b=A[i]; A[i]=A[i+1]; A[i+1]=b;}
				    }
			else if (A[i]<0){
				if (i>0)
					if (A[i-1]>0)	{b=A[i]; A[i]=A[i-1]; A[i-1]=b;}
					 }
		}
	}
	
	printf("\nRearranged Array: ");
	for (count=0; count<n; count++)
		printf("%d ", A[count]);
		
	return 0;
}
