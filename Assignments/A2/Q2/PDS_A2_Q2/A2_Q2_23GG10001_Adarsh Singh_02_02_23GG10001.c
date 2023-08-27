#include<stdio.h>
int main()
{
  int ageinmonth;
  float  ageinyr;
  int i;
  printf("enter the age of the person in months\n");
  scanf("%d",&ageinmonth);
  ageinyr=((float)ageinmonth)/12;
  i=(int)ageinyr+1;
  printf("Your age in years is %d ",i);
  return 0;
}  
