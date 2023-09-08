#include<stdio.h>
int main()
{
  int n,max=0,sec=0,sum=0,num;
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  if(n/10 ==0)
    {
      max = n;
      sum =n;
    }
  while(n/10>0)
    {
      num = n%10;
      sum += num ;
      if(num>max)
	{
	  sec = max;
	  max = num;
	}
      else if(num>sec)
	sec = num;
      n = n/10;
      if(n/10 ==0)
	{
	  sum += n;
	  if(n>max)
	    {
	      sec = max;
	      max =n;
	    }
	  else if(n>sec)
	    {
	      sec =n;
	    }
	}
	    
	    
    }
  printf("Sum of digits = %d\n",sum);
  printf("Max of the digits = %d\n",max);
  printf("Second max of the digits = %d\n",sec);
  return 0;
}
      
