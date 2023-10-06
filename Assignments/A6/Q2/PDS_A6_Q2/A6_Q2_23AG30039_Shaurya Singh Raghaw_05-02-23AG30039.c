#include<stdio.h>
#include<stdlib.h>
int arr[30];

void sum(int a[],int n)
{
  int s=0;
  for(int i=0;i<n;i++)
    {
      s = s+arr[i];

    }
  printf("sum is %d\n",s);
  
  return;
}

void max(int a[],int n)
{
  int m=arr[0];
  for(int j=0;j<n;j++)
    {
      if(arr[j]>m)
	m=arr[j];
    }
  printf("max is %d\n",m);

  return;
}

void reverse(int a[],int n)
{
  int temp;
  for(int k=0;k<n;k++)
    {
      temp= a[k];
  a[k]=a[n-k-1];
  a[n-k-1]=temp;
    
  printf("%d\n",a[k]);
    }
  return;
}
  
int main()
{
 
  for(int i=0;i<30;i++)
    {
      arr[i]= (rand()%11) + 20;
  printf("%d\n",arr[i]);
    }
  sum(arr,30);
  max(arr,30);
  reverse(arr,30);

    return 0;
}
