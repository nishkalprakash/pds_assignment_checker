#include <stdio.h>
int main ( )
{
	int i,n,j,b,mini;
	printf("enter the number of elements\n");
	scanf("%d",&n);

	int ar[n+1];
    for(i=0;i<n;i++)
    {
    	printf("enter the element a[%d]\n",i);
    	scanf("%d",&ar[i]);
    }
    printf("enter the value of m\n");
    scanf("%d",&ar[n]);
    for(i=0;i<n+1;i++)
    {
    	mini=i;
    	for(j=i+1; j<n+1; j++)
    	{
    		if(ar[mini]>ar[j])
    		{
    			mini=j;
    		}
    	}
    	b=ar[i];
    	ar[i]=ar[mini];
    	ar[mini]=b;
    }
    printf("output array is\n");
    for(i=0;i<n+1;i++)
    {
    	printf("%d ",ar[i]);
    }

}