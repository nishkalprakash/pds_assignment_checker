// Name Prem Pastagia
// Roll Number 23ME10063

#include <stdio.h>
#include <stdlib.h>


int main()
{

  int num,i,j,arr[50];
  int count=0,temp;

  printf("Enter the number of elements:\n");
  scanf("%d",&num);
  // creating array with random numbers
  printf("The array is:\n");
  for(i=0;i<=num-1;i++)
    {
      arr[i]=(rand()%91)+10;
      printf("%d ",arr[i]);

    }
  // code for interchange
  if(num>2)
    {
      
      for(i=2;i<=num-1;i++)
	{
	  if(arr[i]<arr[i-2])
	    {
	      temp=arr[i];
	      arr[i]=arr[i-2];
	      arr[i-2]=temp;
	      count++;
	    }
	}
     
      //printing output
      if(count!=0)
	{
      printf("\nThe interchanged array is:\n");
      for(i=0;i<=num-1;i++)
	{
	  printf("%d ",arr[i]);
	}
      printf("\nThe number of interchanges are: %d\n",count);
	}
      else printf("There are no interchange.\n");
      
    }
  else printf("\nThere are no interchange.\n");
  return 0;
}
