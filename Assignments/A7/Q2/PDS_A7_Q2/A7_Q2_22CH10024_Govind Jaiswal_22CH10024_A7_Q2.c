/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 7
Description : Program to find frquency of elements in an array
*/

#include <stdio.h>

int main()
{
    int arr[100],n,m,i,j;
    printf("Enter no. of array elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter frequency of a no. for checking : ");    //asking for giving frequency
    scanf("%d",&m);
    for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[i] == arr[i+1])
			printf("%d appears %d times\n",arr[i],m);    //printing frequency of elements , if present
			break;
		}
		printf("NO number appears %d times\n",m);   //printing this if no element matched
		break;
	}
}
