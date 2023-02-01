#include <stdio.h>
#include <stdlib.h>
int fibonacci (int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n>1)
		return fibonacci(n-1) + fibonacci (n-2);
}
int main()
{
	// to check if the given input belongs to the fibonacci sequence
	int num_1;
	printf("Enter the number to be checked");
	scanf("%d",&num_1);
	int i;
	for(i=0;i<35;i++)
	{
		if(fibonacci(i)==num_1)
		{
			printf("Yes");
			return 0;
		}

	}
	printf("No");
	return 0;
}