#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  printf("enter a value:");
  scanf("%d",&n);
  int arr[50],i,c;
 
  for(i=0;i<n;i++)
    {
      arr[i]=rand()%91+10;
      printf("%d,",arr[i]);
    }
 
  for(i=0;i<n-2;i=i+2)
      {
    if(arr[i]>arr[i+2])
      {
        c=arr[i];
        arr[i]=arr[i+2];
        arr[i+2]=c;
    }
      }

  printf("\n\n");
  for(i=0;i<n;i++)
      {
    printf("%d,",arr[i]);
      }
  return 0;
}
