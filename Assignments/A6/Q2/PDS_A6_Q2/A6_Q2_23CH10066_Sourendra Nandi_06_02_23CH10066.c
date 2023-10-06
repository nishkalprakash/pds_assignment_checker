#include <stdio.h>
#include <stdlib.h>

int sum(int arr[],int size);
int max(int arr[],int n)
{
  int l=arr[0];
  if (n==0) return arr[0];
  if (l<max(arr,n-1))
    {
      l=max(arr,n-1);
    }
  return l;
}
int main()
{
  int arr[30],i,s,large;
  for (i=0;i<30;i++)
    {
      arr[i]=rand()%11+20;
    }
  printf("Array = {");
  for (i=0;i<30;i++)
    {
      printf("%d,",arr[i]);
    }
  printf("}\n");
  s=sum(arr,30);
  printf("Sum = %d\n",s);        //PART (a)
  large=30;
  
  printf("MAx=%d",large);   //part b
}
int sum(int arr[],int n)
{
  int s=0;
  if (n==0) return 0;
  s=arr[n-1]+sum(arr,n-1);
  return s;
}
