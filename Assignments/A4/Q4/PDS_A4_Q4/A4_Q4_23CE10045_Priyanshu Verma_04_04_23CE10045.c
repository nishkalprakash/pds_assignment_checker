//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int n;
  while(1)
    {
      printf("enter a single digit number: ");
      scanf("%1d",&n);
      if(n<0)
	{
	  return 0;
	}
      while(n==5)
	{
	   printf("enter a single digit number: ");
	   scanf("%1d",&n);
	    while(n==1)
	{
	   printf("enter a single digit number: ");
	   scanf("%1d",&n);
	    while(n<10)
	{
	   printf("enter a single digit number: ");
	   scanf("%1d",&n);

	   if(n==7)
	     {
	     printf("pattern found");
	     return 0;
	     }
   	}
	}
	}
    }
}

