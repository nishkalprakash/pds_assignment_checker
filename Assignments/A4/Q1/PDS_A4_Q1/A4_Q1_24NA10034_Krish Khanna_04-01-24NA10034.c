#include <stdio.h>
#include <math.h>
int main()
{
	int n, i = 1, sum = 1, temp = 0, a;
	printf("\nPlease enter the value of n:");
	scanf("%d", &n);
	printf("\nThe value of n is: %d\n", n);
	if (n<=0)
	printf("\nPlease input a positive non-zero value of n.\n");
	if (n>=0)
	{
		printf("\nThe series is:");
		for(i=1 ; i <= n ; ++i)
		{
			a = temp;
			temp = sum;
			sum = temp + sum;
			if(i%2 == 0)
			{
				printf("-%d,", sum);
			}
			else
			{
				printf("%d,", sum);
			}
			
		}
	}
	return 0;
}

