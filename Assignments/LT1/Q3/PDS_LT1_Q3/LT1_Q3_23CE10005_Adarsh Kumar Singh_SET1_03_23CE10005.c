// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>

int main ()
{
  int s, n;
  printf("\nEnter the scale (s): ");
  scanf("%d", &s);
  printf("Enter the number of lines (n): ");
  scanf("%d", &n);

  printf("\n");
  int a = 0, b = 1;
  while (b <= n)
  { 
    for (int i = 1; i <= s+3; i++)
      {
	if (b > n)
	  {
	    break;
	  }
	printf("%d", i);
	a++;
	if (a == b)
	  {
	    printf("\n");
	    a = 0;
	    b++;
	  }
      }
  }
  printf("\n");
  
  return 0;
}
