//Ritwik Suresh
//23EE10056
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=1,sum=0,min=100,num,n,m,min_num;
  while(i<=20)
    {
      num = rand()%6000;
      if(num>5000)
	{
	  m = num;
	  while(num>0)
	    {
	       n = num%10;
	       sum += n;
	       num /= 10;
	    }
	  if(sum<min){
	    min =sum ;
	    min_num = m;
	  }
	    
	  printf("%d\n",m);
	  printf("Sum of digits = %d\n",sum);
	  i++;
	  sum =0;
	}
    }
  printf("No. with smallest sum = %d",min_num);
  return 0;
}
	  
	  
	 
	  
