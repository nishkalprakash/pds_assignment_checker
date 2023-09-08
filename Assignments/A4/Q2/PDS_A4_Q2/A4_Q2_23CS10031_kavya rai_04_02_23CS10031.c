#include<stdio.h>
#include<stdlib.h>
int main()
{int a, max=0;
  int i;
  for(i=0;i<20;i++)
    {
      a=rand()%100+1;
      printf("%d\n",a); 
      if(a>max)
        max=a;
    }
  printf("maximum no. = %d", max);

      
      
    }
    
      
  
