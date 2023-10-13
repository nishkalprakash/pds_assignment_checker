// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[5][5];
  printf("\nThe 5*5 matrix is: \n");
  for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
        {
	  if (i == j) printf("%-3d  ", a[i][j] = 0);
	  else if (i < j) printf("%-3d  ", a[i][j] = (rand() % 980) + 20);
	  else printf("%-3d  ", a[i][j] = a[j][i]);
        }
      printf("\n");
    }

  printf("\nAfter modification: \n");
for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
        {
	  if (a[i][j] > 150)
	    {
	      a[i][j] = -1;
	    }
	  printf("%-3d  ", a[i][j]);
        }
      printf("\n");
    }
 printf("\n");

return 0;
}
