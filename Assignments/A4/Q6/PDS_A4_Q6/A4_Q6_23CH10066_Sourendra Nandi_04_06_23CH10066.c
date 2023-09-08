//name : Sourendra Nandi
//roll no: 23CH10066
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num,i,temp,dig,sum=0,min_sum=40,min_num=5000;     /*max value of sum of digits is 32 for 5999 so we assign min as 40*/
  for (i=1;i<=20;i++)
    {
      num=rand()%(6000-5000+1)+5000;
      sum=0;
      temp=num;
      while (temp>0)
	{
	  dig=temp%10;
	  sum=sum+dig;
	  temp=temp/10;
	}
      printf("Random number %d = %d   Sum of digits = %d\n",i,num,sum);
      if (sum<min_sum)
	{
	  min_sum=sum;
	  min_num=num;
	}
    }
  printf("Number with smallest sum of digits = %d\n",min_num);
  return 0;
}
