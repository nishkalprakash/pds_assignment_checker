/* Name: Varun Huchchannavar
   Section: 14
   Roll No: 22MF10045 */
#include <stdio.h>
#include <stdlib.h>
void reverse (int *ptr ,int size)
{
      for(int i=size-1;i>=0;i--)
      {
      	printf("%d ",ptr[i]);
      }
}

// To create a 2D array of integers of size m*n.
int main()
{
	int m,n,i,j;
	printf("Enter M: \n");
	scanf("%d",&m);
	printf("Enter N: \n");
	scanf("%d",&n);
    int* array[m];
    for(i=0;i<m;i++)
    {
    	array[i]=(int*) malloc (n*sizeof(int)); // n=columns
    }
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d ",&array[i][j]);
    	}
    }
    printf("Hello");
    return 0;
}