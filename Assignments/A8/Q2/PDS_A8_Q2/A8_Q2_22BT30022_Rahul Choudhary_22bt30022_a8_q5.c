/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:8
description:to get saddle point.
*/
#include<stdio.h>
int main()
{
	int k,h=0,x,y,l,min=100000,max=0;
	printf("write shape of array\n");
	scanf("%d%d",&x,&y);
	int a[x][y];
	printf("write array elements\n");
	for (int i=0;i<x;i++)
	{
		for (int j=0;j<y;j++)		//loop for column
		scanf("%d",&a[i][j]);
	}
	for (int i=0;i<x;i++)	//loop for row
	{
		for (int j=0;j<y;j++)	//column loop
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				k=j;
			}
		}
		for(l=0;l<x;l++)   	//row loop
		{
			if(a[l][k]>max)
			max=a[l][k];
		}
		if (min==max)
		{
			h=1;
			printf("saddle point is %d\n",min);
		}
		min=100000;
		max=0;
	}
	if(h==0)
	printf("no saddle point");
	return 0;
}
	
