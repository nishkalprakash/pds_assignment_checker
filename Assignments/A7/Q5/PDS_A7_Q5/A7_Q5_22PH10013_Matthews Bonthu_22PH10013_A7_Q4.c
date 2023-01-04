#include <stdio.h>
int main  ( )
{
	int i,n,count=0;
	int ar[10];
	printf("enter number of elements to be inputted ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("enter the a[%d] element\n",i);
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
       int k=0;
       for(int j=0;j<i;j++)
       {
       	if(ar[j<=ar[i]])
       	 {
       		k++;
       	 }
       }
       for(int j=i+1; j<n;j++)
       {
       	if(ar[j]>=ar[i])
       	{
       		k++;
       	}
       }

       if(k==n-1)
       {
       	count++;
       }
	}
	printf("Out of Order %d ",n-count);
	return 0;

}