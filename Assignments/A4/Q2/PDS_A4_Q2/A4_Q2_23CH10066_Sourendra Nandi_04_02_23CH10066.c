//Name : Sourendra Nandi
//Roll no : 23CH10066
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,num,max=0;
  for (i=1;i<=20;i++)
    {
      num=(rand()%100)+1;
      printf("Random number %d= %d\n",i,num);
      if (num>max)
	{
	  max=num;
	}
    }
  printf("Maximum of the random numbers = %d\n",max);
  return 0;
}
  
