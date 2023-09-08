//Name: Swaraj Dian
//Roll No.: 23EC30056

#include <stdio.h>
int main()
{
  int n,d=0,ld=0,ld2=0,sum=0;
  printf("Enter the Number");
  scanf("%d",&n);
  while(n>0)
    {
      d=n%10;
      sum=sum+d;   //Sum of digits
      n=n/10;
      if ((d>ld2)&&(d<ld))  //checking for largest and 2nd largest digit
	ld2=d;
      if(d>ld)
	{
	  ld2=ld;
	  ld=d;
	}
    }
  printf("Sum of digits= %d\nLargest= %d\nSecond Largest= %d\n",sum,ld,ld2);
}
