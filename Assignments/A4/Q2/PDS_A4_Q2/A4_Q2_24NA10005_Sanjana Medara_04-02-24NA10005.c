#include <stdio.h>
int main()
    {
      int n;
      scanf("%d",&n);
      for(int i;i>=0;i++)
      {
      if(i>n)
      printf("largest number:%d",i);
      else if(n>i)
      printf("second largest number:%d",i);
      else if(n<=0)
      printf(" value not yet entered");
      else
      printf("value not entered");
      }
      return 0;
    }
      
