#include <stdio.h>
#include <math.h>

int ams(int n)
{
  int rem,count=0,d,sum=0,l,rem2;
  while (n!=0)
  {
    rem=n%10;
    sum=sum+pow(rem,d);
    d=count;
    n=n/10;
    count++;
  }
    if (sum==n)
   {
  return sum;
    }
}

int main ( )
{
   int n,i,k;
   printf("please enter a number");
   scanf("%d",&n);
   for(i=1;i<n;i++)
    {
      k=ams(i);
      if (k=n)
      {
          printf("%d is an amstrong number\n",i);
      }
    }
   return 0;
}


