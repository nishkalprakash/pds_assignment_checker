#include<stdio.h>
int main()
{
	int rows,col;
	printf("enter the no of row");
	scanf("%d",&rows);
	printf("enter the no of col");
	scanf("%d",&col);
	int a[rows][col];
	int i,j,k;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		int min=a[i][0];
		int temp=0;
		int temp2=0;
		for(j=0;j<col;j++)
		{
			if(a[i][j]<min)
			{
				min = a[i][j];
				temp = j;
			}
		}
		int max = a[0][temp];
		for(k=0;k<rows;k++)
		{
			if(a[k][temp]>max)
			{
				max = a[k][temp];
				temp2=max;
			}
		}
		if(a[i][temp]==max)
		{
			printf("The saddle point is %d",max);
			return 0;
		}
		}
		printf("There is no saddle point in 2-D array");
}