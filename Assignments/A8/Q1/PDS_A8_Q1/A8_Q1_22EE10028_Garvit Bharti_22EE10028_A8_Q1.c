#include<stdio.h>
int main()
{
	int i,j,p,q;
	printf("enter the no of row");
	scanf("%d",&p);
	printf("enter the no of col");
	scanf("%d",&q);
	int a[p][q];
	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				{
					scanf("%d",&a[i][j]);
				}
		}
		printf("Column Major Order :");
		for(i=0;i<q;i++)
			{
				for(j=0;j<p;j++)
				{
					printf("%d ",a[j][i]);
				}
			
			}
		
		
}