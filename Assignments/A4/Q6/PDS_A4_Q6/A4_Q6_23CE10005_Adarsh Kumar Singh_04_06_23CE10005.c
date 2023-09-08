// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int n;
  int m, x, sum, min;
  n = (rand() % 1000) + 5000;
  m = n; sum = 0; min = 100;
  printf("\n");

  for (int i=1; i<=20; i++)
    { printf("Random number %d: ", i);
      printf("%d\n", n);
      x = m%10;
      sum = sum + x;
      m /= 10;
      printf("And, \nThe sum of the digits of the number %d is %d\n\n", n, sum);
      if (sum < min)
	{
	  min = sum;
	}
    }
  printf("\n\n\nThe smallest sum of digits is %d\n\n", min);
  return 0;
}
      
      
