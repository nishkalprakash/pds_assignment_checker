#include <stdio.h>
int bin_Search(int a[], int start , int end , int value)//binary searching function declaration
{
    int mid;
    while(end >= start)// make sure

    {        mid = (start + end)/2;

        if(a[mid] == value)
        {
            return mid+1;
        }

        else if(a[mid] < value)
        {
            return bin_Search(a, mid+1, end, value);
        }

        else
        {
            return bin_Search(a, start, mid-1, value);
        }
    }
    return -1;
}
int main()
{

  int a[20],n, value,i;
  printf("enter the number of elements n:");
  scanf("%d", &n);
  printf("enter the elements in increasing order :");
  scanf("%d", a[i]);
  printf("Element to be searched is:");
  scanf("%d",&value);

  int result = bin_Search(a, 0, n-1, value); // Store result

  for (int i = 0; i < n; i++)


  if (result == -1)
  printf("\nElement is not present in the array");
  else
  printf("\nElement is present at %d position of array", result);
  return 0;
}
