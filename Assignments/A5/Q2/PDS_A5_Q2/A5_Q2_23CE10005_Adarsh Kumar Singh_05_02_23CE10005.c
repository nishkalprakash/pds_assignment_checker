// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  for (int i=1; i > 0; i++)
    {
      printf("\n\nEnter the no. of elements (maximum 50)  you want to have in your set of Integers: ");
      scanf("%d", &num);
      if (i > 0 && i <= 50)
	{
	  break;
	}
      else
	{
	  printf("Invalid input. Please give the input again.");
	}
    }
  printf("\nThe %d random integers generated are: ", num);
  int n[num], a=0;
  for (int i=0; i < num; i++)
    {
      printf("%d  ", n[i] = (rand() % 41) + 10);
      if ((i+1)%5 == 0)
	{
          printf("\n\t\t\t\t\t\b\b");
	}
    }
  printf("\n\n");
  for (int i=0; i < num; i++)
    {
      for (int j=i; j < num; j++)
	{
          for (int k=j; k < num; k++)
	    {
              if ((n[i] + n[j] + n[k] == 60) && (i != j && j != k && k != i))
		{
		  a++;
		  printf("%d", a);
		  if ((a)/10 == 0)
		    {
                      printf("   ");
		    }
		  else
		    {
                      printf("  ");
		    }
		  printf("The indices %d, %d, %d with values stored %d, %d, %d respectively add up to 60\n", i, j, k, n[i], n[j], n[k]);
		}
	    }
	}
    }
  printf(" ");
  return 0;
}
