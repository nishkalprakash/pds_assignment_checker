//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:11
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
float sumhp(int n)
{if(n==1)
  return 1;
 else
  return((1.0/n)+sumhp(n-1));
}
 
int main()
{ int n;
  float sum;
  printf("enter the value of n:");
  scanf("%d",&n);
  sum=sumhp(n);
  printf("sum of %d terms in hp is:%.3f\n",n,sum);
return 0;
}
