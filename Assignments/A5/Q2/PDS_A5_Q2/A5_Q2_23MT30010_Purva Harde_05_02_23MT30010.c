//Rollno:<23MT30010>
//Name:<Purva Harde>

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int i, b, c, d;
 int x[50];
  printf("Enter the number of numbers to be generated \n");
  scanf("%d", &d);

  for(i = 0; i<d; i++){
    b = rand()%41 + 10;
    x[i] = b;}

  for(i=0; i<d; i++)
    printf("number[%d]=%d \n", i, x[i]);

  for(i=0; i<d; i++)
    {
      for(b=i+1; b<d; b++)
	{
	  for(c=b+1; c<d; c++)
	    if(x[i] + x[b] + x[c] == 60)
	      {
		printf("triplet at [%d, %d, %d]= (%d, %d, %d)\n", i, b, c, x[i], x[b], x[c]);
	      }
	}
    }
  return 0;
}
