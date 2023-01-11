/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:8
Question no:5
description:transpose*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int size;
	int i,j;//loop control variables
	printf("Enter number of rows:");
	scanf("%d",&size);//accept size
	int a[size][size];
	printf("Enter elements:");
	for(i=0;i<size;i++)
    {
		for(j=0;j<size;j++)
			scanf("%d",&a[i][j]);//Enter elements of array
    }
    int transpose[size][size];
    for(i=0;i<size;i++)//loop to find and store transpose of matrix
    {
    	for(j=0;j<size;j++)
    		transpose[j][i]=a[i][j];
    }
    printf("Elements column major wise:");
    for(i=0;i<size;i++)
    {
    	for(j=0;j<size;j++)
    	{
    		printf("%d ",transpose[i][j]);//print the elements column major wise
    	}
    }
    return 0;
}