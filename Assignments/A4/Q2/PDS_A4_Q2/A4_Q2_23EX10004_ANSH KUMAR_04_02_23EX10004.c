// roll no- 23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,x,max=0;
  for(i=1; i<=20;i++){
    printf("%d\n",x=rand()%101);
    if(x>max) max=x;
  }
   
  printf("the max no is %d\n",max);
  return 0;
}
