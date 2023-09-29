//roll no:<23ME30001>
//NAME: <AARYA MAJALI>
//set1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int s,n,m;
  printf("enter a scale factor s in the range [1,6]");
  scanf("%d",&s);                  //reading s value from the user
  if ((s>=1) && (s<=6))            //checking if the input is valid
    {
      printf("scale factor is %d\n",s);
    }
  else
    {
      printf("invalid input please enter again");
    }
  printf("enter the number of lines n in the range [1,10]");
  scanf("%d",&n);                  //reaing n value from the user
  if ((n>=1) && (n<=10))           //checking if the input is valid
    {
      printf("the number of lines are %d\n",n);
    }
  else
    {
      printf("invalid input please enter again");
    }
  for (m=1;m<=n;m++)         //using a for loop for traversing m
    {
      for (s=1;s<=s+3;s++)
      {
       printf("%d\n",s);
      }
    }
  return 0;
}
  
