#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,j,k,sum,arr[50];
  printf("Enter the no of numbers to be generated: ");
  scanf("%d",&n);

  for (i=0;i<n;i++)
    {
      arr[i] = rand()%41+10;
      printf("%d  ",arr[i]);
    }

  printf("\n");
  printf("\n");

  for (i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
	{
	  for(k=i+2;k<n;k++)
	    {
	      sum = arr[i]+arr[j]+arr[k];
	      if(sum ==60)
		{
		  printf("Indices: %d  %d  %d || Values: %d  %d  %d\n", i,j,k,arr[i],arr[j],arr[k]);
		}
	    }
	}
    }
}
