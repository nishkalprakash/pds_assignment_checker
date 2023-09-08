#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,t,r,sum=0,a,high=6000,low=5000,min, min_sum=36;
  for(i=0;i<20;i++)
    {
      a=low+rand()%(high-low+1);
      printf("%d\n",a);
      t=a;
      sum=0;
      while(a>0)
	{
	  r=a%10;
	  sum=sum+r;
	  a=a/10;
	}
      printf("sum of digits = %d\n",sum);
     if(sum<min_sum)
       {
       min_sum=sum;
       min=t;
       }
      
    }
 printf("No. having smallest sum of digits = %d",min);
return 0;
}
