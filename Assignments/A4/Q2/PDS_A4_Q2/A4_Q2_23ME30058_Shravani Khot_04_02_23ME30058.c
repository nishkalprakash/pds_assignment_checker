//Roll No.: 23ME30058

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  int i,a, max=0 ;
  
  for (i=0 ; i<20 ; i++)
    {
      a=rand()%100;
      printf("%d ", a);
      
     if (max<a)
	max=a;
    }
      printf("The maximum number generated is %d",max);
      
    
 
  return 0;
}
  
