//Roll No.:23CE10045
//Name:PRIYANSHU VERMA


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[50], n, i, j, k, sum;
  printf("Enter no of random numbers to be generated (less than 50): \n");
  scanf("%d", &n);
  if(n<1 || n>50)
    {
      printf("Invalid input");
      return 0;
    }
  
  for(i=0; i<n; i++)
    {
      arr[i] = rand() % 41 + 10;
      printf("arr[%d] = %d, " , i, arr[i]);
    }
  printf("\n");

  for(i=0 ; i<n-2 ; i++)
    {
      for(j=i+1 ; j<n-1 ; j++)
	{
	  for(k=j+1 ; k<n ; k++)
	    {
	      if(arr[i] + arr[j] + arr[k] == 60)
		{
		  printf("arr[%d] + arr[%d] + arr[%d] = %d + %d + %d = 60\n", i, j, k, arr[i], arr[j], arr[k]);
		}
	    }
	}
    }
  return 0;
}
