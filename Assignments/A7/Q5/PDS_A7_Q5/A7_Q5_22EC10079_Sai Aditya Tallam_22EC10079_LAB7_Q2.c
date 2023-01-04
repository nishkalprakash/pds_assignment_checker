#include<stdio.h>

int main()
{
	int n,count;
	printf("enter the value of n:");
	scanf("%d",&n);

	int arr[10];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}

	for(int i=0,count=0;i<n;i++)
	{
	    for(int j=0;j<i;j++)
	    {
	       if(arr[i]>=arr[j])
	       {
              count++;
	       }
	    }
	

	for(int j=i+1;j<n;j++)
	{
       if(arr[i]<=arr[j])
       {
       count++;
       }

	}
	printf("%d",count);
	if(count==n*n*n)
	{
	   return i;
	}

	else
	{
	return -1;
	}

 }
 return 0;

}