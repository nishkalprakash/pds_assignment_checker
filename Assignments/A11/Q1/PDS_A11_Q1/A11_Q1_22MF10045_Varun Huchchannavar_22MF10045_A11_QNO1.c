#include <stdio.h>
#include <stdlib.h>
float answer (int n)
{
	if(n==1)
		return 1.0;
	if(n>1)
	{
		return 1.0/n + answer(n-1);
	}
}
int main()
{
	int num_1;
	printf("Enter the number of terms whose sum is to be found \n");
	scanf("%d",&num_1);
	float sum= answer(num_1);
	printf("%f",sum);
	return 0;
}