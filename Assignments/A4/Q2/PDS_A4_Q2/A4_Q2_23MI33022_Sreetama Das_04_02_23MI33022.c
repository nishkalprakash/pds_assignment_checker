#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, x, max=0;
  for(i=0; i<20; i++) //generating 20 numbers
    {
      x= (rand()%100)+1; //taking numbers between 0 to 100
      printf("%d\n ", x); //printing the random numbers
      if(x>max) //checking the maximum number among the 20 numbers
      {
	max=x;
      }
    }
  printf("The maximum number that was generated is %d ", max); //printing the maximum number
  return 0;
}
