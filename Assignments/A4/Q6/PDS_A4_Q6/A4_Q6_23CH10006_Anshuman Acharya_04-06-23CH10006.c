//Name-Anshuman Acharya
//Roll No-23CH10006
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, min = 36, x, j, y, z, minnum=0;
  for(i = 0;i<=20;i++)      //Because we need 20 numbers.
    {
      x = rand()%1000+5000;      //Storing the random numbers in a variable.
	
	  printf("%d ",x);
	  for(j = 0;j<=4;j++)
	    {
	      y += y%10;
	      z = y;
	    }
	  if(y<min)
	    {
	      min = y;
	      minnum = x;
	    }
	
    }
  printf("\nThe number with minimum sum of digits is %d\n",minnum);
  return 0;
  
      
 
}
