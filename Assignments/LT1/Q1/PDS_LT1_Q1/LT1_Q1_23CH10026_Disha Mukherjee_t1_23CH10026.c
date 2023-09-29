//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>

int main()
{
  int n,c,m,s=0,s1=0,sum=0;
  long long int k,cs,ds=0,sum1=0;
  printf("Enter a positive integer less than 9999\n");
  scanf("%d",&n);
  //Part a
  c=n;
  while(n>0)   //encoding number
    {
      if(n%10!=9)
	s=s*10+n%10+1;
      else
	s=s*100+1;
      n=n/10;
    }
  while(s>0)  //reversing the number
    {
      s1=s1*10+s%10;
      s=s/10;
    }
  if(c%10==9) //if last digit of input is 9
    s1=s1*10;
  printf("\n%d",s1);

  //Part b
  m=s1;
  while(s1>0)  //finding sum of digits
    {
      sum=sum+s1%10;
      s1=s1/10;
    }
  cs=m*100+sum; //adding sum as last 2 digits
  printf("\n%lld",cs);

  //Part c
  k=cs;
  while(k>0)  //double encoding
    {
      sum1=sum1*100+k%10;
      k=k/10;
    }
  while(sum1>0) //reversing digits
    {
      ds=ds*10+sum1%10;
      sum1=sum1/10;
    }
  if(cs%10==0) //if last digit of cs was 0
    ds=ds*1000;
  else
    ds=ds*10;
  printf("\n%lld",ds);
  return 0;
}
  
