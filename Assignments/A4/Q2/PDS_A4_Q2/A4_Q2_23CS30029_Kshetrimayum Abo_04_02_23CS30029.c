//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, val, max = 0;

  //For loop for generating random numbers 
  for (i = 0; i < 20; i++)
    {     
      val = rand()%100;
      printf("%d\n", val);
      if (val>max) // if condition for checking if the random number in this iteration is greater than the max value and if true, the the random number becomes the new max value
	max = val;
    }
  printf("The maximum number that was generated is %d\n",max);
  return 0;
}
