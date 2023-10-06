//Name:Gargi Mukherjee
//Roll no.:23ME10025
#include<stdio.h>
int sum(int arr[],int size)
{
  if(size==0)
    return 0;
  else
    return (sum(arr,size-1)+arr[size-1]);
}
void main()
{
  int arr[30];
  int x;
  for(int i=0;i<30;i++)
    {
      x=rand()%10+20;
      arr[i]=x;
    }
  for(int i=0;i<30;i++)
    {
      printf("a[%d]=%d",i,arr[i]);
    }
  int y=sum(arr,30);
  printf("\n Sum=%d",y);
 
}
  
