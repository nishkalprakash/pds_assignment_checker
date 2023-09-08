#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int i,max=0,a;
  for(i=0;i<=20;i++)
    {a=rand() % 100;
      printf("%d\n",a);
      if(a>max)max=a;
    }
  printf("the maximum numberis:%d\n",max);
  return 0;
}
 
