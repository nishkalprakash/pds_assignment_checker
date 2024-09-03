#include<stdio.h>
#define N 100
int main ()
{
	int n,i,j,arr[N],temp;
	printf("Enter the size of array (n<=N):");
	scanf("%d",&n);
	if(n>N)
	{
		printf("ERROR:n>100\n");
	}
	
	else
        {
		printf("Input %d of integers:\n",n);
		for(i=0;i<n;i++)
		{
			printf("element-%d:",i);
			scanf("%d",&arr[i]);

	        }
	        printf("Original Array:\n");
		for(i=0;i<n;i++) {
		printf("%5d",arr[i]);
				 }
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i+1;j++)
			{
				if((arr[j]>0)&&(arr[i]<0))
				{
			      
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
		      
				}
				
			}
				
		}
		
		printf("\nRearranged Array:\n");
		for(i=0;i<n;i++) {
		printf("%5d",arr[i]);
				 }	
			
        }
    
        printf("\n");
        return 0;
}
      
      
       
        
    
