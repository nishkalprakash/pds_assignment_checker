// Roll No. 23ME10063
// Name: Prem Pastagia

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int sum,small=100,smallnum,a,dig,x;

  for(int i=0;i<20;i++)
    {
      sum=0;
      x=(rand()%1000+5001);
      a=x;

      while(x>0){
	dig=x%10;
	sum+=dig;
	x=x/10;
      }
      printf("%d\n",a);

      if(sum<small){
	smallnum=a;
	small=sum;
      }
      
    }
  printf("The number wih smallest sum of digits is %d\n",smallnum);
  return 0;
}
