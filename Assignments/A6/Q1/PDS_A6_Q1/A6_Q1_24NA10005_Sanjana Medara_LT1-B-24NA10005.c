#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>
int main ()
   {
     float Filter[100];
     int Bin[5];
     int Bin[7];
     int N=10,y;
     int x;
     srand(50);
      for(int i=1;i<=N;i++)
     {
     x=rand() % 100+1;
     printf("Random Number x:%d\n",x);
     for (int k=1;k<=x;k++)
     {
       y=(k*k/2*k+1)-pow(-1,k)*k+sin(x/3);
       printf("y=%d",y);
     }
     }
     for(int j=0;j<=7;j++)
     {
    if (y<Filter[100])
    {
    Bin[5]=x;
    }
    else
    {
    Bi[7]=x;
    }
    printf("values of array1:%d",Bin[5]);
    printf("values of array2:%d",Bi[7]);
    return 0;
   }
  }
   

