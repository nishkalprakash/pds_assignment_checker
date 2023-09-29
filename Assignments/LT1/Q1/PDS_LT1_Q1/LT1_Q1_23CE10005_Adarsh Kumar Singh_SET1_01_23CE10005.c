// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>

int main ()
{
  long int n, x = 0, a = 0,b = 0, c = 1;
  printf("\nEnter a positive integer value (less than 9999): ");
  scanf("%li", &n);
  printf("\nInput: %li\n", n);
  while (n != 0)
    {
      a = n%10;
      if (a == 9)
	{
	  b = b + 1;
	}
      else
	{
	  b = b + a + 1;
	}
      n = n/10;
      x = x + (a+1)*c;
      if (a == 9 && a+1 == 10)
	{
	  c = c*100;
	}
       else
	{
	  c = c*10;
	}
    }
  printf("encoded: %li\n", x);

  x = x*100 + b;
  printf("with checksum: %li\n", x);

  c = 10;
  while (x != 0)
    {
      a = x%10;
      x = x/10;
      n = n + a*c;
      c = c*100;
    }
  printf("double encoded: %li\n", n);

  return 0;
}
