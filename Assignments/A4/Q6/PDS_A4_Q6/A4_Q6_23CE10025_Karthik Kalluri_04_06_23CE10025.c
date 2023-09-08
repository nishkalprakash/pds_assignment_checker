#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,sum,m ,min=6000;
  int n;
  m=n,sum=0;
    
     for(int i=1;i<=20;i++)
    {
      n=(rand()%1000)+5000;
      printf("%d\n",n);
      x=n%10;
      sum=sum+x;
      n=n/10;
    }
     if(sum<min)
       { min=sum;
	 printf("min is %d\n",min);
	   }
return 0;}
