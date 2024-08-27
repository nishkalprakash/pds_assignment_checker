#include <stdio.h>
int main()
{
	int n=1, i, max = 0, max2 = 0, c;
	printf("\nPlease enter the numbers:");
	while(n>0)
	{
		scanf("%d", &n);
		if(n>max)
		{
			max = n;
			printf("\nThe largest number is %d", max);
		}
		if(max2 == 0)
		{
			printf("\nValue not entered yet.");
		}
		if(max>n && n>max2)
		{
			max2 = n;
			printf("\nThe second largest number is %d", max2);
		}
		
	}
	return 0;
}
