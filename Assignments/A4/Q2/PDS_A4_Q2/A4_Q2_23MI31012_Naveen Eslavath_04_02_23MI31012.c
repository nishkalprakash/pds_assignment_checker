#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,x,max;
  for(i=0;i<=20;i++){
    x=rand()%100+1;
    if(x>max){
      max = x;
    }
    printf(" %d\n",x);
  }
    printf("the maximum number is %d",max);
  return 0;
}
    
