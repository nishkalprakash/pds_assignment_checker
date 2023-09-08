//Roll No.: 23CS30029
//Name: Kshetrimayum Abo 

#include<stdio.h>
int main()
{
  int n, sum = 0, max1=0, max2=0, d=0;
  printf("Enter an integer : ");
  scanf("%d",&n);

  //while loop for taking in digits from the user entered number and doing the necessary conditions 
  while(n > 0)
    {
      d  = 0; //Initialising d to 0, d is the digit from the number
      if (n%10>d)
	{
	  d = n%10;
	  if (d > max1) 
	    max1 = d;
	  if ( d<max1 && d>max2 )
	    max2 = d;
	}
      sum = sum + n%10;
      n = n/10;
        
      
    }
  printf("Sum of digits = %d\n",sum);
  printf("Largest = %d Second Largest = %d\n",max1,max2);
  
  
  return 0;
}
