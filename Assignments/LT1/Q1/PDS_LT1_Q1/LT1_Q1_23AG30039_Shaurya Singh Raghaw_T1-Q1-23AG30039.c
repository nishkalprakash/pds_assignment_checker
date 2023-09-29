#include<stdio.h>
int main()
{
  int n;
  int sum=0;
  int checksum=0;
  int b=1;
  printf("enter the value of number: ");
  scanf("%d",&n);
  int temp = n;
  
  //part a
  for(int i=0;n!=0;i++)
	{
	int a=n%10;
      if(a==0)
	a=1;
      else if(a==1)
	a=2;
     else if(a==2)
	a=3;
     else if(a==3)
	a=4;
      else if(a==4)
	a=5;
      else if(a==5)
	a=6;
      else if(a==6)
	a=7;
      else if(a==7)
	a=8;
      else if(a==8)
	a=9;
      else if(a==9)
	a=10;

      if(a!=10)
      checksum=checksum + a;
      else
	checksum=checksum+1;
      sum = sum+a*b;
	b=b*10;
	n=n/10;
	}
  printf("input:%d->encoded:%d",temp,sum);
  //part b
  if(checksum!=10)
  printf("input:%d->encoded:%d->with checksum->%d0%d",temp,sum,sum,checksum);
  else
    printf("input:%d->encoded:%d->with checksum->%d%d",temp,sum,sum,checksum);
  
      return 0;
}
