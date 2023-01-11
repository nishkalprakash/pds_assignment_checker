/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:8
Discription :To find saddle point in 2d array 

*/
#include<stdio.h>
int main()
{
	int i,j,k,min,max,m,n,b[2][2];
	int arr[20][20];
	printf("Enter number of rows and col");
	scanf("%d %d",&m,&n);
	printf("Enter the number of the array");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		min=arr[i][0];
		for(j=0;j<n;j++)
		{
			if(arr[i][j]<=min)
			{
				min=arr[i][j];
				b[0][0]=i;
				b[0][1]=j;
			}
		}
		j=b[0][1];
		max=arr[0][j];
		for(k=0;k<m;k++)
		{
			if(max<=arr[k][j])
			{
				max=arr[i][j];
				b[1][0]=k;
				b[1][1]=j;
			}
		}

		if(min==max)
		{
			if((b[0][0]==b[1][0])&&(b[0][1]==b[1][1]))
			{
				printf("Saddle point (%d,%d):%d\n",b[0][0],b[0][1],max);
			}
		}
	}
	return 0;
}
		













	


	
