#include<stdio.h>

int main()
{
	int n,i,j;
	printf("Enter the number of elements in one row\n ");
	scanf("%d",&n);
	printf("Number of elements in one row is %d",n );
printf("\nEnter the elements of array\n ");

 int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	      {
	      	scanf("%d",&a[i][j]);
	      }		
}
	      printf("The elements are\n");
	
	for(i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
	{
		printf("%d ",a[i][j]);
		
	}
	
}
			
printf("\nThe elements in column major order are\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[j][i]);
		}	
	}

     return 0;
 }

