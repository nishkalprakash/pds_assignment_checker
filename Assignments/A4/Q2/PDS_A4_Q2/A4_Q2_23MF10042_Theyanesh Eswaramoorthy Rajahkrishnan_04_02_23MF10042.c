#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, rn,max=0;
  for(i=0;i<20;i++){
    rn=(rand() % 100)+1;
    printf("%d\n",rn);
    if (rn>max)
      max=rn;
  }
  printf("The maximum number is %d",max);
  return 0;
}
  
    
    
