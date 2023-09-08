#include <stdio.h>
#include<stdlib.h>
int main()

{
  int t,i,max=0
    ;
  for(i=0;i<20;i++)
    {
    t=(rand()%100)+1;
  
    printf("%d \n",t);
    if (t>max)
      {
	max=t;
	  
      }
    }
  printf(" the maximum number is %d \n",max);
  
}

  
  
