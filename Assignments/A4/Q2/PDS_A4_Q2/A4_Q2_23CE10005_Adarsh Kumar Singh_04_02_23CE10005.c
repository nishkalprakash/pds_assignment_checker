// Name - Adarsh Kumar Singh
// Roll No. 23CE100005

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  printf("\n");
  printf("The 20 random generated numbers in the range [1,100] are:\n\n");
  int n, max = 0;
  for (int i=1; i<=20; i++)
    {
      n = (rand() %100) + 1;
      printf("%d\t", n);
  if (i%5 == 0) printf("\n");
  if (n > max)
    {
      max = n;
    }
    }
printf("\n\nThe maximum of all the numbers generated is %d\n\n", max);
return 0;
}
