//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int main( ) {
  int i,sum=0,n,num,min,r;
    printf("Random numbers\n");
    for(i=0;i<20;i++) {
      r= 5000 + (rand()%1000);
      n = r;
      printf("%d\t",r);
      while(r>0)
	{sum=sum +(r%10);
	  r=r/10;}
      printf("Sum of its digits=%d\n",sum);
      min=36;
      if(min > sum)
	{min = sum;
	  num = n;}
      sum=0;
    }
    printf("The number having smallest sum of digits=%d\n",num);
    return 0;
}
      
      
	  
    
      
      
