//Roll No:23ME10025
//Name:Gargi Mukherjee
#include<stdio.h>
int main()
{
  int n;int d;int s,r,k,sum,min,checksum;//initializing variables
  printf("Enter an integer variable less than 9999");
  scanf("%d",&n);//taking number as input
  d=n;
  s=0;
  k=0;
  sum=0;
  while(d>0)//encoding each digit
    {
      r=d%10;
      r=r+1;
      s=s*10+r;
      d=d/10;
	
    }
  while(s>0)
    {
      r=s%10;
      sum=sum+r;
      k=k*10+r;
      s=s/10;
    }
  printf("Encoded:%d\n",k);//printing the encoded number
  checksum=(k*100)+(sum%100);
	  
  printf("with checksum:%d",checksum);
  return 0;
}
  
