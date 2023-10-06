#include<stdio.h>
#include<stdlib.h>
int MaxValue = 0;

int sum(int array[], int size)
{
  int AdditionValue;
  if(size == 0) return array[0];
  AdditionValue = array[size] + sum(array, size-1);
  return AdditionValue;
}

int max(int array[], int size)
{
  if( size == 0 && MaxValue < array[0])
    {
      MaxValue = array[0];
      return MaxValue;
    }
  else
    {
      return MaxValue;
    }
  if( array[size] > max(array, size-1))
    {
      MaxValue = array[size];
      return MaxValue;
    }
}

void reverse(int array[], int start, int end)
{
  int BinValue;
  if(start == end )
    {
      return;
    }
  else if(start + 1 == end)
    {
      BinValue = array[start];
      array[start] = array[end];
      array[end] = BinValue;
      return;
    }
  else
    {
      BinValue = array[start];
      array[start] = array[end];
      array[end] = BinValue;
      reverse(array, start + 1, end - 1);
    }
}

int main()
{
  int list[30], i, BinNumber;
  for(i = 0; i < 30; i++)
    {
      list[i] = rand()%11+20;
      printf("%d\t",list[i]);
    }
  printf("\n");
  printf("Sum of elements in the array is %d\n",sum(list, 29));
  printf("The max value in the array is %d\n",max(list, 29));
  reverse(list, 0, 29);
  for(i = 0; i < 30; i++)
    {
      printf("%d\t",list[i]);
    }
  return 0;
}
