//ROLL NO.:23BT30019
//NAME: NAZEER ANWAR
#include<stdlib.h>
#include<stdio.h>
int main()
{
  int m,min=6001,r,re,s=0,i,n;

    for(i=1;i<=20;i++)
      {
	r=5000+ (rand() % 1000);
	n=r;
	while(n>0)
	  {
	    re=n%10;
	    s=s+re;
	    n=n/10;
	  }
	printf("the number is %d and the sum of its digit is %d\n",r,s);
	if(s<min)
	  { min=s;
	    m=r;}
      }
    printf("number having smallest sum of digits is %d\n",m);
}
