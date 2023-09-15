//Roll no. - 23IE10031
//Name - Om Singh Jadon

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("size of array: ");
  scanf("%d", &num);
  int arr[50];
  for (int i=0; i<num; i++)
    {
      int rint = rand()%40 + 10;
      arr[i] = rint;
      printf("%d ", rint);
    }
  printf("\n");

  for (int i=0; i<(num-2); i++)
    {
      for (int j=i+1; j<(num-1); j++)
	{
	  for (int k = j+1; k<num; k++)
	    {
	      if((arr[i] + arr[j] + arr[k]) == 60)
		{
		  printf("%d(index = %d) + %d(index = %d) + %d(index = %d) = 60\n", arr[i],i,arr[j], j, arr[k], k);
		}
	    }
	}
    }
}
