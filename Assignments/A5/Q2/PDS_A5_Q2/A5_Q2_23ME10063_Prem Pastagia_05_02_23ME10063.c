// Name Prem Pastagia
// Roll Number 23ME10063

#include <stdio.h>
#include <stdlib.h>

int main()
{
 
  int num,i,j=0,k=0,arr[50];
  int sarr1[50],sarr2[50],sarr3[50];
  int a=0,b=0,c=0;

  printf("Enter the number of elements:\n");
  scanf("%d",&num);
  // creating array with random numbers
  printf("The array is:\n");
  for(i=0;i<=num-1;i++)
    {
      arr[i]=(rand()%41)+10;
      printf("%d ",arr[i]);
    }
  // code for getting triplet
  for(i=0;i<=num-1;i++)
    {
      for(j=i+1;j<=num-1;j++)
	{
	  for(k=j+1;k<=num-1;k++)
	    {
	      int sum=arr[i]+arr[j]+arr[k];
	      if(sum==60)
		{
		  sarr1[a]=i;
		  sarr2[b]=j;
		  sarr3[c]=k;
		  a++;
		  b++;
		  c++;
		}
	    }
	}
    }
  
  //printing the output
  printf("\nThe indices and the corresponding values are:\n");
  for(i=0;i<=a-1;i++)
    {
      printf("%d=%d %d=%d %d=%d\n",sarr1[i],arr[sarr1[i]],sarr2[i],arr[sarr2[i]],sarr3[i],arr[sarr3[i]]);
    }

  
  return 0;
}
