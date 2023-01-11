/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 8
Description: Program to find saddle point 
*/
#include<stdio.h>
#include<stdlib.h>
int min(int a, int b)
{
	if(a<b)
	{
		return a;
	}
	else { return b;}
}// function to find min

int max(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else { return b;}
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int mi[n];
	int min= 10000000;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			min= min(a[i][j],min)
		}
		mi[i]= min;
	}
	int ma[m];
	int max =0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			max= max(a[j][i],max)
		}
		ma[i]= max;
	}
	int flag = 0;
	for(int i=0;i<n;i++)
		{
			if(mi[i]==ma[i]){
				printf("%d",ma[i]);
				flag =1;
			}
		}
		if(flag==0)
		{
			printf("No saddle point exists");
		}


return 0;
}