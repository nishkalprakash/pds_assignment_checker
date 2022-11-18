#include <stdio.h>
#include<stdlib.h>

void print_array(int a[], int size)
{
  printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
        if (i != size - 1)
            printf(", ");
        else
            printf("]\n");
    }
}

int max(int a[], int size)
{
  int i = 0, max = a[0];
  while(i<size)
  {
    if (a[i]>max) max = a[i];
    i++;
  }
  return max;
}

int min(int a[], int size)
{
  int i = 0, min = a[0];
  while(i<size)
  {
    if (a[i]<min) min = a[i];
    i++;
  }
  return min;
}


int main()
{
  int n, m;
  printf("Enter the number of array elements: ");
  scanf("%d", &n);
  int *a = (int *)malloc(n*sizeof(int));
  printf("Enter the array elements: ");
  for (int i=0; i<n; i++) scanf("%d", &a[i]);
  printf("Array: ");
  print_array(a, n);
  printf("Enter the number of bins: ");
  scanf("%d", &m);
  int range = (max(a, n) - min(a, n))/m;
  int total = 0;
  int st = min(a, n), r1, r2;
  for (int i = 0; i < m; i++)
  {
    if (i==0) r1 = st;
    else r1 = r1 + range + 1;
    r2 = r1 + range;
    int count=0;
    for (int j=0; j<n; j++)
    {
      if (a[j]>=r1&&a[j]<=r2) count++;
    }
    int *bin = (int *)malloc(count*sizeof(int));
    int k=0;
    for (int j=0; j<n; j++)
    {
      if (a[j]>=r1&&a[j]<=r2) bin[k++] = a[j];
    }
    printf("Bin %d -> ", i+1);
    print_array(bin, count);
    printf("Number of elements in Bin %d = %d\n", i+1, count);
  }
}