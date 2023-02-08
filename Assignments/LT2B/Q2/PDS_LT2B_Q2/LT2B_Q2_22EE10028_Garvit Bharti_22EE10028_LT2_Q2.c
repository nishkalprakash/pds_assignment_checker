#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,j;
	printf("Enter M :");
	scanf("%d",&m);
	printf("Enter N:");
	scanf("%d",&n);
	int *a;
	a = (int*)malloc(sizeof(int)*m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i*n+j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i*n+j]);
		}
		printf("\n");
	}
	

	return 0;


}