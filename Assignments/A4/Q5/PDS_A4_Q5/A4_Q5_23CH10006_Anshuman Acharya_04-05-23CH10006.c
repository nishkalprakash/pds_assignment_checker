//Name-Anshuman Acharya
//Roll No-23CH10006
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num, max = 0, secmax, rem, x, sum = 0, y;
  printf("Enter a number: ");
  scanf("%d",&num);
  x = num;
  while(num>0)
    {
      rem = num%10;
      y = rem;
      sum += rem;
      num = num/10;
      while(y> max)
	{
	  secmax = max; 
	  max = y;
	  
	  if(secmax<y)
	    {
	      secmax = y;
	     }
	}
    }
  printf("The sum is %d\nThe max digit is %d\nThe second max digit is %d",sum,max,secmax); 
  
  return 0;
  
      
 
}
