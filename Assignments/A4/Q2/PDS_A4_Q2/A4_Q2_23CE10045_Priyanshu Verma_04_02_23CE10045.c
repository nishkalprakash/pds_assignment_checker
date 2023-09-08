//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int i=0,a=0,max=0;
  for(i = 0 ; i<20 ; i++)
    {
      a = rand() % 100;
     
      if(a>max)
	{
	  max = a;
	}
      printf("%d\n",a);
  }	
  printf("Maximum number: %d", max);
  return 0;
}
