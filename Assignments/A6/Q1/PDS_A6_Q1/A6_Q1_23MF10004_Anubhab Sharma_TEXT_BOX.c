#include <stdio.h>
#include <stdlib.h>
int arr[100];

int main()
{
  int size;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  printf("The original array is: ");
  fill(size);
  printf("\n");
  printf("Right rotated: \n");
  rotate_right(size);
  printf("\n");
  printf("Left rotated: \n");
  rotate_right(size);
  
  
  
}

int fill(int size)
{
  int x,i;
  for(i=0;i<size;i++)
    {
      arr[i] = rand()%898 + 100;
      printf("%d  ", arr[i]);
    }
   printf("\n");
}


  
void exchange(int size)
{
  int i,x=arr[size];
  for(i=size;i>0;i--)
    {
      arr[i] = arr[i-1];
    }
 
   for(i=size;i>0;i--)
     {
       printf("%d  ", arr[i]);
     }
}


void rotate_left(int size)
{
  int i,x=arr[0];
  for(i=size-1;i>0;i--)
    {
      arr[i] = arr[i-1];
    }
  arr[size-1] = x;
   for(i=0;i<size;i++)
     {
       printf("%d  ", arr[i]);
     }
    printf("\n");
}


void rotate_right(int size)
{
  int i,x=arr[size-1];
  for(i=size-1;i>0;i--)
    {
      arr[i] = arr[i-1];
    }
  arr[0] = x;
   for(i=0;i<size;i++)
     {
       printf("%d  ", arr[i]);
     }
    printf("\n");
}