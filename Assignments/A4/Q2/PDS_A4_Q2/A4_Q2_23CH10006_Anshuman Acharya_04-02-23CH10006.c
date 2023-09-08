//Name-Anshuman Acharya
//Roll No-23CH10006
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, max = 0, x;
  for(i = 0;i<=20;i++)      //Because we need 20 numbers.
    {
      x = rand()%100;     //Storing the random numbers in a variable.
      printf("%d ",x);
      if(x> max)
	{
	  max = x;
	}
    }
  printf("\nThe maximum is %d\n",max);
  return 0;
}
