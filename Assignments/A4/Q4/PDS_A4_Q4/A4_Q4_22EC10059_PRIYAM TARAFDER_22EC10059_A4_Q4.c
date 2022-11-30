//display a triangular pattern of 0 and 1
#include <stdio.h>
int main()
{
	int n;
	do
	{
		scanf("%d",&n);
	}while(n>10||n<2);
	for(int t=1;t<=n;t++)
	{
		for(int i=1;i<=t;i++)
		{
			if(i%2==0)
				printf("0 ");
			else
				printf("1 ");
		}
		printf("\n");
	}
}
