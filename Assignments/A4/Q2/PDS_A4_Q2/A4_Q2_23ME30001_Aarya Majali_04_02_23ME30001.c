#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,x,max=0;
  printf("the randomly generated 20 numbers are",rand());
  for(i=0; i<20; i++)
     {
	x=rand()%100+1;
  	if (x>max) max=x;
        printf("%d",x);
     }
  printf("the maximum number generated is %d",max);
  return 0;
}
  
