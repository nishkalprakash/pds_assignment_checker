//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>

int arr[30], size = 30;
int sum(int);
int max();

int main()
{
  int summation, maxi;
  for(int i = 0; i< size; i++)
    {
      arr[i] = rand()%11+20;
      printf("%d ",arr[i]);
    }
  summation = sum( arr[0]);
  maxi = max()
  printf("\nSum of elements: %d", summation);
  printf("\nMaximum element: %d", maxi);
  
  return 0;
}
int i =0;
int sum( int x)
{
  int summation = 0;
  i++;
  while( i<=size)
    {
      summation = x + sum(arr[i]);
    }
  return summation;
}

int max()
{
  maxi = arr[0];
  for(int j = 0; j < size; j++)
    {
      if(arr(j) > max) max = arr[j];
    }
  return maxi;
}

      
     
  

  
