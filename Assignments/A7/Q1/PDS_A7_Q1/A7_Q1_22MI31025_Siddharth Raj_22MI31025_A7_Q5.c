/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:7
Question no:5
description:insertion*/

#include <stdio.h>
int main()
{
	int i;
	int n;int m;
	printf("Enter no of elements:");
	scanf("%d",&n);//accept no elements
	int a[n];
        printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);//accept array elements
	}
    printf("Enter m:");
    scanf("%d",&m);//enter element
    int b[n+1];
    int p=0;//points to the element index
    while(a[p]<=m)//loop to insert elements
    {
    	b[p]=a[p];
    	p++;
    }
    b[p]=m;//insert element
    for(i=p+1;i<(n+1);i++)
    {
    	b[i]=a[i-1];//copy rest of the elements in a
    }	
    for(i=0;i<(n+1);i++)
	{
	     printf("%d ",b[i]);//print array elements
	}
	printf("\n");//change line
	return 0;
}
