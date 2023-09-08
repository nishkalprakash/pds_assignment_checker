//ROLL NO.:23BT30019
//NAME:NAZEER ANWAR

#include<stdio.h>
int main()
{
  int n=1,num=0;
  while(n>0)
    {int r;
      printf("Enter a single digit number");
      scanf("%d", &r);
      if(r<0)
	{ printf("negetive no is not allowed");
	  break;}
      num=num*10 +r;
      if(num%10==7 && num%1000==1 && num%10000==5)
	{
	  printf("pattern found");
      break;
	}
    }
}
