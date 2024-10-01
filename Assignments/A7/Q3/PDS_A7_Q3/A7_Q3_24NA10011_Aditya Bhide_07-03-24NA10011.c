// Program to distribute array elements into bins
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include <stdio.h>
void displayBins(int A[],int n,int bins,int max,int min)
{
	int range=(max-min+1)/bins;
	int up,low,count=0;
	for(int i=1;i<=bins;i++)
	{
		count=0;
		low=bins*(i-1)+1;
		up=up+range-1;
		if(i!=(bins-1)){
		printf("bin %d -->",i);
		for(int j=0;j<n;j++)
		{
			if(A[j]<=up && A[j]>=low){
			printf("%d,",A[j]);
			count++;}
		}
		}
		else
		{
			up=up+range%bins;
			printf("bin %d -->",i);
		for(int j=0;j<n;j++)
		{
			if(A[j]<=up && A[j]>=low){
			printf("%d,",A[j]);
			count++;}
		}
		}
		printf("\tElems=count\n");
	}
}
int main()
{
	int N,bins;
	printf("N = ");
	scanf("%d",&N);
	int A[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Bins = ");
	scanf("%d",&bins);
	int max,min;
	for(int i=0;i<N;i++)
	{
		if(i==0)
		{
			max=A[i];
			min=A[i];
			continue;
		}
		if(max<A[i])
		max=A[i];
		if(min>A[i])
		min=A[i];	
	}
	displayBins(A,N,bins,max,min);
	return 0;
}

