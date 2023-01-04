#include<stdio.h>
int main()
{

	int m;int arr[100];int n;int i;int j;int k;int c=0;int g;int flag=0;
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		c =0;
		for(k=0;k<n;k++)
		{
			if(arr[j]==arr[k])
			{
				c++;
			}

		}
		if(c==m)
		{
			printf("%d ",arr[j]);
                   flag=1;

                      
		}


	}
	if(flag==0)
	{
		printf("No number");
	}
	printf("appears m times");
	return 0;




}
