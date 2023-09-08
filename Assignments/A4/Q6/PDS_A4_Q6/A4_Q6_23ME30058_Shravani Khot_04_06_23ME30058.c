#include<stdio.h>
#include<stdlib.h>

int main()
{

  int i,a,b,sum=0,e=32,d,f,min=10000 ;
  
  for (i=0 ; i<20 ; i++)
    {
      a=(rand()%1000)+5000 ;
  
      printf("%d\n",a);
      b=a;

      while (b>0)
	{
	  sum=(b%10)+sum;
	  b = b/10;
	  
	}

      if(sum<min)
	min=sum;

      printf("The sum of the digits for %d is %d \n",a,sum);

      

    }

  printf("The min sum is %d", min);

      


	return 0;

}
      
	  
