//Name:Pramod Kumar
//Roll No:23PH10032
#include<stdio.h>
#include<stdlib.h>
int main(){
  int arr[50],n,a[50],i,j,k=0;
  printf("array size:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    arr[i]=rand()%91+10;
  }
  printf("array is:\n");
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  for(int i=0;i<n-2;i=i+2)
  {
    if(i%2==0)
    {
      if(arr[i]>arr[i+2])
      {
	int temp=arr[i];
	arr[i]=arr[i+2];
	arr[i+2]=temp;
	k++;
      }
    }
  }
  for(j=0;j<n;j++)
  {
    printf("%d ",arr[j]);
  }
  printf("total interchange:%d",k);
  return 0;
}
   
