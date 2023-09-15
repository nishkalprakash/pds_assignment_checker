//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include <stdio.h>
#include<stdlib.h>

int main()
{
  int i=0, n=0, j=0, a=0, x[50], interchange=0;
  printf("Enter no of random numbers to be generated (max 50): \n");
  scanf("%d", &n);
  printf("Random numbers are: ");
  for(i=0;i<n;i++)
    {
      x[i]=rand()%91+10;
      printf("%d ,",x[i]);
    }
  for(i=0;i < n-3;i+=2)
    {
      if(x[i] > x[i+2])
	{
	  a=x[i];
	  x[i]=x[i+2];
	  x[i+2]=a;
	  interchange++;
	}
    }
  printf("\n");
  printf("Array after interchange: ");
   for(i=0;i<n;i++)
    {
      printf("%d ,",x[i]);
    }
   printf("\n");
   printf("Number of interchanges: %d",interchange);
     return 0;
}
