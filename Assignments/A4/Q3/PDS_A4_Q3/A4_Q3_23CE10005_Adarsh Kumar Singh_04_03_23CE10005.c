// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
int main ()
{
  int n;
  printf("\nEnter any positive integer: ");
  scanf("%d", &n);
  printf("\n\n");
  int m = n, x, rev = 0;
  if (n > 0)
    {
      while (m != 0)
	{
	  x = m%10;
	  rev = rev*10 + x;
	  m = m/10;
	}
    }
  else
    {
      printf("Invalid Input");
    }
  if (rev == n)
    {
      printf("The digits of the number %d form a palindrome.", n);
    }
  else
    {
      printf("The digits of the number %d does not form a palindrome.", n);
    }
  printf("\n\n");
  return 0;
}
