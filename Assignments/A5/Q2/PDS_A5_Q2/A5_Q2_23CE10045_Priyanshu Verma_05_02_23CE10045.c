//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include <stdio.h>
#include<stdlib.h>

int main()
{
  int i, j, k, x[50], n;
   printf("Enter no of random numbers to be generated (max 50): \n");
  scanf("%d", &n);
  printf("Random numbers are: ");
  for(i=0;i<n;i++)  // Generate and print random numbers between [10,50]
    {
      x[i]=rand()%41+10; 
      printf("%d ,",x[i]);  
    }
  printf("\n");
  for(i=0;i<n;i++)
    {
      for(j=(i+1);j<(n-1);j++)
	{
	  for(k=(i+2);k<(n-2);k++)
	     {
	       if(x[i] + x[j] + x[k] == 60)
		 {
		   printf("x[%d] + x[%d] + x[%d] = %d\n",i,j,k,x[i]+x[j]+x[k]);
		   printf("x[%d]=%d, x[%d]=%d, x[%d]=%d\n\n", i,x[i],j,x[j],k,x[k]);
		 }
	     }
      	}
    }
  return 0;
}
  
