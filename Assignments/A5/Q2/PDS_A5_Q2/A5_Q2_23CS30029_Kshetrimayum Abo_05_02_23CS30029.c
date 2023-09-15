//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, j, k, num, n, array[50];

  printf("Enter the size of the array : ");
  scanf("%d",&n);

  //Assigning values into the array
  for(i = 0; i < n; i++)
    {
      num = rand()%41+10;
      array[i] = num;
      printf("%d\t",array[i]);
    }
  printf("\n");


  //Printing triplets that follow the condition
  for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
	{
	  for(k = j+1; k < n; k++)
	    {
	      if(array[i]+array[j]+array[k] <= 60)
		{
		  printf("Ordered Value : (%d,%d,%d) Corresponding Ordered Indices : (%d,%d,%d)\n",array[i],array[j],array[k],i,j,k);
		}
	      else
		continue;
	    }
	}
    }
  
  return 0;
}
