/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Lab Test- 1b
Package- stdio.h
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{ int k; float x0,e,x1;int c=0;
    printf("Enter the first approximate value, the tolerance limit and the maximum number of iterations:\n");
    scanf("%f%f%d",&x0,&e,&k);
    printf("Iteration      x0             x1            Error\n");
    for(int i = 1;i<=k;i++)
    {
      x1= x0-(x0*x0*x0-25)/(3*x0*x0);
      printf("   %d        %f        %f       %f\n",i,x0,x1,x0-x1);
      if(x0-x1<0)
      {
      if(x1-x0<=e)
      {
          printf("The square root is %f",x1);
          c=1;
          break;
      }
      }
      else
      {
      if(x0-x1<=e)
      {
          printf("The square root is %f",x1);
          c=1;
          break;
      }
      }
      x0=x1;
    }
    if(c==0)
    {
      printf("The square root is %f",x1);
    }
    return 0;
}

