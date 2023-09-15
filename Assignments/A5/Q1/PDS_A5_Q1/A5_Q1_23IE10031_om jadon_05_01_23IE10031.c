//Roll no. - 23IE10031
//Name - Om Singh Jadon

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  int count = 0;
  printf("Size of array: ");
  scanf("%d", &num);
  int arr[50];
  for (int i=0; i<num; i++)
    {
      int rint = rand()%90 + 10;
      arr[i] = rint;
      printf("%d ", rint);
    }
  printf("\n");

  for (int j = 0; j<(num-2); j++)
    {
      if ((j%2 == 0) && arr[j] > arr[j+2])
	{
	  int a;
	  a = arr[j];
	  arr[j] = arr[j+2];
	  arr[j+2] = a;
	  count++;
	}
    }
  for (int k = 0; k<num; k++)
    {
      printf("%d ", arr[k]);
    }
    printf("\n");
    printf("number of interchanges = %d\n", count);

}
