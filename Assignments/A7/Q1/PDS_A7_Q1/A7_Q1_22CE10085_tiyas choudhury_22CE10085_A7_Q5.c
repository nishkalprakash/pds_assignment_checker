#include<stdio.h>
int main()
{
	int n;int m;int arr[100];int i;int j,k,l;
	printf("Entert the value of n");
	scanf("%d",&n);
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the array elements in ascending order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		if(m<arr[j])
		{
			arr[j]=m;
                        
		}
		break;

	}

for(l=0;l<=n;l++)
{
	printf("%d ",arr[l]);
}
return 0;



}
