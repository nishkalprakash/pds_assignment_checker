//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num =0, sum=0, copy =0;
  int min = 6000;        // Initialising min to the maximun nmber possible
  printf("Twenty randomly generated numbers with their sum of digits are\n");
  int i =0;
  while( i < 20)      
    {
      num = rand()%6000 +1;    // Generating random numbers till 6000
      if (num >= 5000)         // Limiting the randomly generated numbers to 5000
	{
	  copy = num;
	  while(copy>0)
	    {
	      sum = sum + copy%10;      // Finding sum of digits of each number
	      copy = copy/10;
	    }
	  if (sum<min) min=sum;         // Finding minimum sum
	  printf("%d - Sum of digits: %d\n",num,sum);
	  sum = 0;
	  i++;
	}
    }
  printf("Minimum sum of digits %d\n", min);
  return 0;
}
