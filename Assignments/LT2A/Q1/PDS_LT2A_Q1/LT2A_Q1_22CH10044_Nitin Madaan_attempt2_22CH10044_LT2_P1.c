#include<stdio.h>
#include<stdlib.h>


void print( int m , int n, int a[][m])
{
	{
		 for (int i = n-1; (i <=n-1) && (i>=0); i--)
	{
		for (int j =m-1; (j <= m-1) && (j>=0); j--)
		{
			 printf("%d ",a[i][j]);
		}
		printf("\n");
	}


	}


}




int main()
{
	int m,n;
	printf("Enter the no of rows:-\n");
	scanf("%d",&n);
	printf("Enter the no of column\n");
	scanf("%d",&m);

	int *a[n];
	for (int i = 0; i < n; i++)
	{
	 a[i]= (int*)malloc(m*sizeof(int));
	}

   for (int i = 0; i < n; i++)
   {
   	 for (int j = 0;  j< m; j++)
   	 { 
   	 	printf("Enter the element %d of index(%d,%d)\n",i+1,i,j);
   	   scanf("%d",&a[i][j]);
   	 }
   }

  
  

	
		 for (int i = n-1; (i <=n-1) && (i>=0); i--)
	{
		for (int j =m-1; (j <= m-1) && (j>=0); j--)
		{
			 printf("%d ",a[i][j]);
		}
		printf("\n");
	}


	
 return 0;
}
