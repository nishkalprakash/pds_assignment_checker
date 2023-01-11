/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:8
Discription :Convert given row into column major


*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of elements is one row");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[j][i]);
		}
		
	}
	return 0;
}
