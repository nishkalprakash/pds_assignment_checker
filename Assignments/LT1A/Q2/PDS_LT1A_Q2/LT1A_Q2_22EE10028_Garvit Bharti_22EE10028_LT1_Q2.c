#include<stdio.h>
int main()
{
	int n,i,j,k,count=1; 
	printf("enter the no of rows");
	scanf("%d",&n);
	for (i = 1; i <= n; ++i)
	{
		for(j=1;j<=i;j++)
		{ k = count++;
			printf("%d",k);
			
		}
		printf("\n");
	}
	return 0;
}