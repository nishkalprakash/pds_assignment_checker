//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,n1,sum=0,mins=0,min=0;
  n=rand()%1000+5000;
  printf("\n%d",n);
  n1=n;
  while(n>0)
  {
    sum=sum+n%10;
    n=n/10;
  }
  printf("\nSum of digits=%d",sum);
  mins=sum;
  min=n1;
  for(i=2;i<=20;i++)
    {
      sum=0;
      n=rand()%1000+5000;
      printf("\n%d",n);
      n1=n;
      while(n>0)
	{
	  sum=sum+n%10;
	  n=n/10;
	}
      printf("\nSum of digits=%d",sum);
      if(sum<mins)
	{
	  mins=sum;
	  min=n1;
	}
    }
  printf("\nNumber having minimum sum=%d",min);
  return 0;
}

      
