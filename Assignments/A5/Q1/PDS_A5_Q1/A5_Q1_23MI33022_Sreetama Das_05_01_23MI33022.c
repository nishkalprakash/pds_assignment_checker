#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, n, a[50],x, count=0;
  
  printf("\nEnter number of random numbers: ");
  scanf("%d", &n);

  // reading n random numbers
  for(i=0; i<n; i++) 
    {
      x= (rand()%100)+1; //taking numbers between 0 to 100
      a[i]=x;
    }

   // printing n random numbers
  for(i=0; i<n; i++) 
    {
      printf("a[%d] = %d \n", i, a[i]); //printing the random numbers
    }

  
  for(i=0;i<(n-2);i++)
    {
      if(a[i]>a[i+2])
	{
	  x=a[i];
	  a[i]=a[i+2];
	  a[i+2]=x;
	  count++;
	}
    }
  printf("After interchanging: ");

  // printing the arrays
  for(i=0; i<n; i++) 
      printf("a[%d] = %d \n", i, a[i]); //printing the random numbers
  
  printf("\n The total number of interchanges: %d ", count);
 
  return 0;
}
