#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("\n");
  printf("The 20 random numbers in the range of 1 to 100 are :\n");
  int i,n,max=0;
  for(i=1;i<=20;i++)
    {
       n=(rand()%100)+1 ;
       printf("%d\n",n);

  if(n>max)
    {
      max=n;
      }
    }
  printf("The max number generated is %d",max);
  
  return 0;
}
