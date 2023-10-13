// Name : Bhoomik Modi
// Roll : 23PH10013
#include <stdio.h>
#include<string.h>
#include <math.h>
#include<stdlib.h>
// Declaration of functions
int findMax(int data[20][20], int m , int n);
int findMin(int data[20][20], int m, int n);
int findMinMax(int data[20][20], int m, int n);
int findMaxMin(int data[20][20], int m, int n);
int main()
{
	int data[20][20];
	int m,n;
	printf("Enter any two between 2 and 20 :\n");
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++)// Data entry of array
	{
		for(int j=0;j<n;j++)
		{
			data[i][j]=rand()%11;
			printf("%d\t",data[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// calling of the said functions
	findMax(data,m,n);
	printf("\n");
	findMin(data,m,n);
	findMinMax(data,m,n);
	findMaxMin(data,m,n);
}	
int findMax(int data[20][20], int m , int n)
{
	int sum=0;
	int maxr,maxc;
	int maxsum=0;
	for (int i=0;i<m-2;i++)// Iterating over 3*3 submatrixes
	{
		for (int j=0;j<n-2;j++)
		{
			for(int k=i;k<=i+2;k++)
			{
				for (int b=j;b<=j+2;b++)
				{
					sum+=data[k][b];
				}
			}
			if(maxsum<sum)
			{
				maxsum=sum;
				maxr=i;
				maxc=j;
			}
			sum=0;
		}
	}
	for(int i=maxr;i<=maxr+2;i++)//Printing the required matrix
	{
		for (int j=maxc;j<=maxc+2;j++)
			{
				printf("%d\t",data[i][j]);
			}
		printf("\n");
	}
	printf("\nThe sum of all it's element is %d \n\n",maxsum);
}
int findMin(int data[20][20], int m , int n)
{
	int sum=0;
	int minr,minc;
	int minsum=10000;
	for (int i=0;i<m-2;i++)
	{
		for (int j=0;j<n-2;j++)
		{
			for(int k=i;k<=i+2;k++)// To iterate over the 3*3 sub matrixes
			{
				for (int b=j;b<=j+2;b++)
				{
					sum+=data[k][b];
				}
			}
			if(minsum>sum)
			{
				minsum=sum;
				minr=i;
				minc=j;
			}
			sum=0;
		}
	}
	for(int i=minr;i<=minr+2;i++)// printing the required matrix
	{
		for (int j=minc;j<=minc+2;j++)
			{
				printf("%d\t",data[i][j]);
			}
		printf("\n");
	}
	printf("\nThe sum of all it's element is %d \n\n",minsum);
}
int findMinMax(int data[20][20], int m, int n)
{
	int minr,minr1;
	int minc,minc1;
	int maxe=-1;// To find the maximum of that row
	int minimum=100;//To get the minimum amogst the maximum row element
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(data[i][j]>maxe)// performing the required logic
			{
				maxe=data[i][j];
				minr=i;
				minc=j;
			}	
		}
		if(minimum>maxe)	// storing of the new minimum
		{
			minimum=maxe;
			minr1=minr;
			minc1=minc;			
		}
		maxe=-1;
	}
	printf("minMax = %d, present in row %d and column %d \n",minimum,minr1,minc1);
}
int findMaxMin(int data[20][20], int m, int n)
{
	int maxr,maxr1;
	int maxc,maxc1;
	int mine=100;// To find the minimum of that row
	int maximum=-1;//To get the maximum0 amogst the minimum row element
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(data[i][j]<mine)// performing th erequired logic
			{
				mine=data[i][j];
				maxr=i;
				maxc=j;
			}	
		}
		if(maximum<mine)	// storing of new maximum
		{
			maximum=mine;
			maxr1=maxr;
			maxc1=maxc;			
		}
		mine=100;
	}
	printf("MaxMin = %d, present in row %d and column %d \n",maximum,maxr1,maxc1);
}
