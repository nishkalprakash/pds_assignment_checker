/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:7
Discription : To insert the new element


*/
#include<stdio.h>
int in_index(int arr[],int new,int n)
{
	for(int i=0;i<n-1;i++)
		{
		if(new<arr[i])
			return i;
		else
			return n;
		}
}
	
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],new;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&new);
	int p=in_index(arr,new,n);
	for(int j=n;p<j;j--)
	{
		arr[j]=arr[j-1];
	}
	arr[p]=new;		
	for(int k=0;k<n;k++)
		printf("%d\n",arr[k]);
	return 0;
}
	
		
		
		

	
	
