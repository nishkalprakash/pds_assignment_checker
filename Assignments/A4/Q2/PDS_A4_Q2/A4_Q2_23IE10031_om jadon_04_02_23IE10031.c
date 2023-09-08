#include <stdio.h>
#include <stdlib.h>

// Roll No. 23IE10031
// Name- Om Singh Jadon

int main()
{
  
  int rand_num, max=0;
  for (int i = 0; i<20; i++)
    {
      rand_num = (rand()%100)+1;
      if (rand_num>max) max = rand_num;
      printf("%d\n", rand_num);
    }
  printf("Max Number is %d\n", max);
}
