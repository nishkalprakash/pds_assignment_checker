//NAME:SUPARNA MANDI
//ROLL NO:23BT10035
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, r, max=-1;
  for(i=1;i<=20;i++)
    {
      //printf("%d",rand()%)
      r=rand()%100;
      printf("%d ",r);
      if (r>max)
	max=r;
    }
  printf("maximum no is: %d",max);
}





