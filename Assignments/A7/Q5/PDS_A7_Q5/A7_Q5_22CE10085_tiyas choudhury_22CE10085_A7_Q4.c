#include<stdio.h>
int main()
{
	int arr[100],n,i;int j,k,l;
	int c=0;int flag=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<j;k++)
		{
			if(arr[k]>arr[j])
			{
				c++;
				flag=1;
				break;
			}

		}
		if(flag==0)
		{
			for(l=j;l<n;l++)
			{
				if(arr[j]>arr[l])
				{
					c++;
					break;
				}
			}
		}
	}
	printf("Out of order:%d",c);
	return 0;
}
	


