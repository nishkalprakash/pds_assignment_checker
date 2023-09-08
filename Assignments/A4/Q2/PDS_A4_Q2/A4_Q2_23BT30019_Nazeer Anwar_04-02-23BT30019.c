//ROLL NO.:23BT30019
//NAME:NAZEER ANWAR

#include<stdlib.h>
#include<stdio.h>
int main()
{
  int r,i,max;
  for(i=1;i<=20;i++)
    {
      r=(rand() % 100)+1;
      printf("%d\n",r);
      if(r>=max)
	max=r;
    }
  printf("maximum no is %d  ",max);
}
