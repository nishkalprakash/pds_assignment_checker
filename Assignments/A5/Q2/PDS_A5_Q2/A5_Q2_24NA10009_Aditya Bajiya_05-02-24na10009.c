#include <stdio.h>
int main()
{
	int array[100], n, N=100, i, t, a;
	printf("how many numbers to read");
	scanf("%d", &n);
	if (n>N){
	printf("Error: n > 100");
	      return 0;}
	      
	      
	for (i=0;i<n;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d", &array[i]);
	}
	
	//orginal array
	printf("original array: ");
	for(i=0; i<n; i++)
	{printf("%d ",array[i]);}
	return 0;
	}
