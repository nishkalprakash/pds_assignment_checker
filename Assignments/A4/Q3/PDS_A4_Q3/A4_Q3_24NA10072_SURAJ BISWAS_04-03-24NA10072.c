#include<stdio.h>

int main()
{	int n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>1;j--)
			printf(" \n");
		for(int j=1;j<i;j++)
			printf("%d ",j);
		
	}
	return 0;
}
