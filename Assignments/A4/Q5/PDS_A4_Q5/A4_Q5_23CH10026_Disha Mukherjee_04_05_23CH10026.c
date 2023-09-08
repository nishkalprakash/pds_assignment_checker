//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>

int main()
{
  int n,m,d,ld=0,sld=0,sum=0;
  printf("Enter a number");
  scanf("%d",&n);
  m=n;
  while(n>0)
    {
      d=n%10;
      if (d>ld)
	ld=d;
      sum=sum+d;
      n=n/10;
    }
  while(m>0)
    {
      d=m%10;
      if(d>sld && d<ld)
	sld=d;
      m=m/10;
    }
  printf("\nSum of digits=%d",sum);
  printf("\nLargest = %d Second Largest = %d",ld,sld);
  return 0;
}

  
