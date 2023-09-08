#include <stdio.h>
#include <stdlib.h>

// Roll No. 23IE10031
// Name- Om Singh Jadon

int main()
{
  int num;
  int sum=0, min_num=0,min_sum=0;
  for (int i=0;i<20;i++)
    {
      num = 5000 + (rand() % 1000 + 1);
      int n=num;
      printf("%d\n", num);
      sum = 0;
      int last_digit;
      while(num)
	 {
	   last_digit = num - (num/10)*10;
	   sum += last_digit;
	   num /= 10;
	 }
      if (min_sum==0)min_sum = sum;
      if (min_sum > sum) {min_sum = sum; min_num = n;}
    }
  printf("The Number with smallest sum of digits is %d\n", min_num);
}
