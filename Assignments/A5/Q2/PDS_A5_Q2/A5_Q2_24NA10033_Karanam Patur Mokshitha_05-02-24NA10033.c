#include <stdio.h>
#define N 100
int main ()  {
     int n,i,j,temp,arr[N], flag=0;
     int ctr=1;
     printf("Enter the size of array such that n(<=N=100):");
     scanf("%d",&n);
     if(n>N)
     {
     	printf("ERROR:n>100");
     }
     else
        {
		printf("Input %d of integers:\n",n);
		for(i=0;i<n;i++)
		{
			printf("element-%d:",i);
			scanf("%d",&arr[i]);

	        }
	        printf("Original Array:");
		for(i=0;i<n;i++) {
		printf("%5d",arr[i]);
				 }
		for(i=0;i<n;i++)
		{
		     for(j=i+1;j<n;j++)
		     {
		        if(arr[i]==arr[j])
		        {
		        ctr++;
		        flag++;
		        temp=arr[i];
		        }
		     }
		     printf("\nDuplicates:\n");
		     printf("%d (%d) ",temp,ctr);
		     ctr=1;
		}
		if(flag==0)
		        {
		        printf("\nNo Duplicates Found");
		        }
		
		
	}
	printf("\n Unique Array:");
		for(i=0;i<n;i++)
		{
			printf("%5d",arr[i]);
		}	
		printf("\n");
		return 0;
}
		
		            	 
