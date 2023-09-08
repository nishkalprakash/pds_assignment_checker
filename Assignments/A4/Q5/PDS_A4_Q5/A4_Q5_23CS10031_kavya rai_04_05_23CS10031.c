#include<stdio.h>
#include<math.h>
int main()
{
  int a,r,sum=0,max,smax,t,n,d;
  printf("Enter a no.:");
  scanf("%d",&a);
  max=a%10;
  t=a;
  while(a>0)
    {
      r=a%10;
      sum=sum+r;
      n=n+1;
      a=a/10;
      if(r>max)
	max=r;
    }
  smax=a/pow(10,n);
  while(t>0)
    {
      d=t%10;
      if(d>smax && d<max)
	smax=d;
      t=t/10;
    }
  printf("sum of digits = %d\n",sum);
  printf("Largest = %d   Second Largest = %d", max, smax);
}
  
