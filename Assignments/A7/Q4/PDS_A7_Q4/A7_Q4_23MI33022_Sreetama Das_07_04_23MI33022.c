#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, arr[50],n,j,k, l, sum=0;
  printf("Enter the number of random numbers to be generated: ");
  scanf("%d", &n);

  //using rand() function to generate random numbers
  for(i=0; i<n; i++)
  {
    arr[i]= rand()%50+1; //generating random numbers
    printf("%d\n",arr[i]); // displaying random numbers
  }

  //finding triplet whose sum add upto 60
  for(j=0; j<=(n-3); j++)
    {
      for(k= (j+1); k<=(n-2); k++)
	{
	  for(l= (k+1); l<=(n-1); l++)
	    {
	      
	       int sum=0;
               sum = sum+arr[j]+arr[k]+arr[l]; // adding the triplets value
               if(sum==60)
	       {
		 printf("The sum of these triplets are 60");
	          printf("%d%d%d", arr[j], arr[k], arr[l]);

		  printf("The indices of these numbers are: ");
	          printf("%d%d%d", j,k,l);
	       }
	    }
	}
    }
  return 0;
}
