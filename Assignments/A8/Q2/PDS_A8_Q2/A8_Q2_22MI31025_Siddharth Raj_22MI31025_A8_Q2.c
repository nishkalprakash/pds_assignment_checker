/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:8
Question no:2
description:saddle point*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n;
	int i,j;//loop control variables
	printf("Enter number of rows:");
	scanf("%d",&m);//accept size
	printf("Enter number of columns:");
	scanf("%d",&n);
	printf("Enter elements:\n");//accept no of columns
	int a[m][n];//declare matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);//accept array element
		}
	}
	int flag=0;int flag1=0;
	int min,max;
	int count=0;//counts number of saddle point 
	int k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			min=a[i][j];//assume the elemen to be maximum and minimum
			max=a[i][j];
			for(k=0;k<n;k++)//check whether the elment is maximum in its column
			{
				if(a[i][k]<min)
					break;
				else
					flag++;
			}
			for(k=0;k<m;k++)//check whether the elment is maximum in its column
			{
				if(a[k][j]>max)
					break;
				else
					flag1++;
			}
			if(flag1==m&&flag==n)
				{printf("Saddle point:%d\n",a[i][j]);count++;}//print the saddle point
			flag1=0;flag=0;
		}
	}
	if(count==0)//to check saddle point is present or not
		printf("There is no saddle point.\n");
	return 0;
}