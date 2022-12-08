#include <stdio.h>
int main()
{
	printf("input the number of elemnets");
	printf("input number of bins");
	int bins;
	scanf("%d",&bins);
	int n;
	scanf("%d",&n);
	int arr[n];
	int diff = max(arr,n)-min(arr,n);
	int a = diff/bins;
	int b = diff%bins;
}
int max(arr,size)
{
	int i;
	int max = arr[0];
	for(i=1;i<size;i++)
	{
		if( max>arr[i])
		max = arr[i];
	}
	return max;
}
int min(arr,size)
{
	int i;
	int min = arr[0];
	for(i=1;i<size;i++)
	{
		if( min<arr[i])
		min = arr[i];
	}
	return min;
}
	
  	
	







