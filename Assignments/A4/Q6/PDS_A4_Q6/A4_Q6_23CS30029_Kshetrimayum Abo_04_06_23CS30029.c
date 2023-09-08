//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int valnum, val, count = 0, min1, min2=0, sum = 0, minnum;
  while (count <= 20)
    {
      val = rand()%6000;
      valnum = val;
      if (val > 5000) // if condition to check if random number is greater than 5000
	  {
	    count++; //Counter to check how many iterations took place

	    printf("%d\t",val);
	    // Taking sum of digits of random number
	    while (val>0)
	      {
		sum = sum + val%10;
		val = val/10;
	      }
	    min2 = sum;
	    if (min2<min1)
	      {
		min1 = min2;
		minnum = valnum; //Taking in the value of random number if sum of digits if smallest compared to past iterations
	      }
	    printf(" Sum of digits : %d\n",sum);

	  }

    }
  printf("The number with smallest sum of digits is : %d\n",minnum);
    
  return 0;
}
