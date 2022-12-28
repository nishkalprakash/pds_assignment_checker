/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:6
Discription : Printing the pairs of co-prime in the given list

*/
#include<stdio.h>
#include<math.h>
int gcd(int m,int n)
{
	if(n==0)
		return m;
	return gcd(n,m%n);

}
void pair(int arr[],int n)
{
	int k,j;
	for(k=0;k<n-1;k++)
	{
		for(j=k+1;j<n;j++)
		{
			if(gcd(arr[k],arr[j])==1)
				printf("(%d,%d) ",arr[k],arr[j]);
			
		}	
	}

}
int main()
{
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	float arr[n];
	for(int i=0;i<n;i++)
	{

			scanf("%f",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
			{
			printf("Invalid Entries All should be positive number");
			break;
		
			}
		else if(ceil(arr[i])!=arr[i])
			{
			printf("Invalid Entries All should be integer");
			break;
			
			}
		else
			pair(arr,n);
	}
	return 0;
}
	
