// Roll No. - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>
#include <stdlib.h>

int arr[30];



int sum(int size);
int max(int size);
int reverse(int n, int m);

int main()
{
  int rnum;
  for(int i=0; i<30; i++)
    {
      rnum = rand()%11 + 20;
      arr[i] = rnum;
    }

  printf("Array is: ");
  for(int i=0; i<30; i++) printf("%d ", arr[i]);
  printf("\n");
  printf("Sum: ");
  printf("%d\n", sum(30));
  printf("Max: ");
  printf("%d\n", max(30));
  reverse(0,29);
  printf("Reversed Array: ");
  for(int i=0; i<30; i++) printf("%d ", arr[i]);
    printf("\n");

  
}

int sum(int size)
{
  if (size == 1)
    return arr[0];

  return arr[size-1] + sum(size-1);
}

int max(int size)
{
  if (size == 1) return arr[0];

  return (arr[size-1] > max(size-1)) ? arr[size-1] : max(size-1);
}

int reverse(int n, int m)
{
  if (n==m || n == m-1)
    return 0;

  int temp;
  temp = arr[n];
  arr[n]=arr[m];
  arr[m]=temp;

  return reverse(n+1,m-1);
  
}
