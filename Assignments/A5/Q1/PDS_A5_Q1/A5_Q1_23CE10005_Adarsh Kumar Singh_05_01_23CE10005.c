// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  for (int i=1; i > 0; i++)
    {
      printf("\n\nEnter the no. of elements you want to have in your set of Integers: ");
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
      printf("%d  ", n[i] = (rand() % 91) + 10);
      if ((i+1)%5 == 0)
	{
          printf("\n\t\t\t\t\t\b\b");
	}
    }
  for (int i=0; i < num; i = i+2)
    {
      if (i+2 < num)
	{
          if (n[i] > n[i+2])
      	    {
              n[i] = n[i] - n[i+2];
	      n[i+2] = n[i] + n[i+2];
	      n[i] = n[i+2] - n[i];
	      a++;
 	    }
	}
    }
  printf("\n\nThe %d random generated numbers \nafter %d alterations are: ", num, a);
  for (int i=0; i < num; i++)
    {
      printf("%d  ", n[i]);
      if ((i+1)%5 == 0)
	{
	  if ((a+1)%10 == 0)
	    {
              printf("\n\t\t\t ");
	    }
	  else
	    {
              printf("\n\t\t\t  ");
	    }
	}
    }
  printf("\n");
  return 0;
}
