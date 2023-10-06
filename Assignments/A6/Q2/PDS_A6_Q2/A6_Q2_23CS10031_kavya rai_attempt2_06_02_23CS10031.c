#include<stdio.h>
#include<stdlib.h>
int arr[30];
int size=30;
int sum(int arr[30],int size);
//int max();
//int reverse();

int main()
{int i;
  for(i=0;i<30;i++)
   {
    arr[i]=20+rand()%11;
   }
   for(i=0;i<size;i++)
  {
   printf("arr[%d]=%d ",i,arr[i]);
  }printf("\n");
  printf("sum is =%d",sum(arr,size-1));
  
  //max();
  //reverse();
}
int sum(int arr[],int size)
{  if(size<0)
   return 0;
 return arr[size]+sum(arr,size-1);
 
}

