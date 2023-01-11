// NAME:: BONTHU MATTHEWS 
// ROLL NO :: 22PH10013
// ASSIGNMENT 8

#include <stdio.h>
int main ( )
{
	int i,j,r,c,k;
	printf("enter number of rows ");
	scanf("%d",&r);
	printf("enter number of coloum ");
	scanf("%d",&c);
	int arr1[r][c];

	//enter the elements in row-coloum order
	if(r==c)
	{
       for(i=0;i<r;i++)
       {
       	for(j=0;j<c;j++)
       	 {
       	 	printf("enter the element a[%d][%d] ::\n",i,j);
       		scanf("%d",&arr1[i][j]);
       	 }
       }
       for(i=0;i<r;i++)
       {
       	  int min=arr1[i][0];
       	  int temp=0;
       	  int temp2=0;
       	  for(j=0;j<c;j++)
       	   {
       		 if(arr1[i][j]<min)
       		   {
                  min=arr1[i][j];
                  temp=j;
       		    }
         	}
       	  int max=arr1[0][temp];
       	  for(k=0;k<r;k++)
       	   {
       		  if(arr1[k][temp]>max)
       		    {
       			  max=arr1[k][temp];
       			  temp2=max;
       		    }
       	   }
         	if (arr1[i][temp]==max)
       	      {
       		    printf("The saddle point is %d",max);
       		    return 0;
       	      }
       }
       printf("there is no saddle point in the array");
	}
	else 
	{
		printf("Fail \n");
		printf("This is not a 2D array");
		printf("plese make sure that rows and coloums should be equal");
	}
	return 0;
}