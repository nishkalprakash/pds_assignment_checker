// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
int main ()
{
  int n;
  printf("\nEnter an Integer value: ");
  scanf("%d", &n);
  if (n<0)
    {
      n = 0-n;
    }
  int m, x, sum, max1, max2;
  m = n; sum = 0; max2 = 0;
  x = m%10;
  sum = sum + x;
  m /= 10;
  max1 = x;
  while (m !=0)
    {
      x = m%10;
      sum = sum + x;
      m /= 10;
      if (x>max2 && x<max1)
	{
	  max2 = x;
	}
      else if (x>max1)
	{
	  max2 = max1;
	  max1 = x;
	}
    }
  printf("\nThe sum of the digits of the number %d is %d \nAnd, \nThe Largest digit is %d \nAnd, \nThe Second Largest digit is %d \n\n", n, sum, max1, max2);
  return 0;
}
