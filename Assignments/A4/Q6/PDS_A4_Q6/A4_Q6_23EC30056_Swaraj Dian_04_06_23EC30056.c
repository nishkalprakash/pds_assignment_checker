//Name: Swaraj Dian
//Roll No.: 23EC30056

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,no,sum=0,ld=0,min,min_sum_no=0,copy;
  for(i=0;i<20;i++)
    {
      no=5000+(rand()%1000);  
      printf("no.= %d\t", no);
      copy=no;
      while (copy>0)  //Digit sum
	{
	  ld=copy%10;
	  sum=sum+ld;
	  copy=copy/10;
	}
      printf("Sum of digits = %d\n",sum);
      if (min>sum) //checking for minimum sum
	{
	  min=sum;
	  min_sum_no=no;
	}
    }
  printf("Minimum sum of digits of generated numbers is: %d ", min_sum_no);
}
