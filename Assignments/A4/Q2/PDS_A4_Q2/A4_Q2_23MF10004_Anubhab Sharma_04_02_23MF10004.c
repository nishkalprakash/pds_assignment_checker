#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a=0, max=0,i;
  for (a=0; a<=20; a++)
    {
    i = rand()%100;
    if (max<i)
      max = i;
    }
 

  printf("The maximum number is: %d\n", max);

}
