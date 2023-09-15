#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,a[50],count=0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      a[i]=rand()%41+10;
      printf("%d\n",a[i]);
    }
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
	{
	  for(int k=0;k<n;k++)
	    {
	      if(a[i]+a[j]+a[k]==60)
	        {
		  printf(" The triplet is %d,%d,%d ",a[i],a[j],a[k]);
		 printf("The indices are %d,%d,%d", i,j,k);
		 count++;
		}
		 
	    }
	}
    }
  if(count==0)
    printf("There are no triplets\n");
	return 0;
    }
  
