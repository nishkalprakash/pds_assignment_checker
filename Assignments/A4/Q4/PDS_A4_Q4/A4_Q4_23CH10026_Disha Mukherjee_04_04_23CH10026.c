//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>

int main()
{
  int n;
  long int num=0;
  while(1)
    {
      printf("\nEnter a single digit no");
      scanf("%d",&n);
      num=num*10+n;
      if(n==7 && ((num%1000-num%100)/100==1) && ((num%10000-num%1000)/1000==5))
	printf("\npattern found");
      if(n<0)
	break;
    }
  return 0;
}

	  
      
