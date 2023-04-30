#include<stdio.h>
#define N 100
int main()
{

    int arr[N];
    int n,j=0;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    if(n>N){
        printf("error: n>100");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
    printf("enter the  element in array %d=",i);
        scanf("%d",&arr[i]);
    }
    printf("original array:");
     for(int i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
  printf("\n");

  for(int i=0;i<n;i++)
    {
        if(arr[i]<0){
            int temp=arr[i];
            for(int k=i;k>=j;k--){
                arr[k]=arr[k-1];
            }
            arr[j]=temp;
            j++;

      }

    }
    printf("rearranged array:");
  for(int i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }

 return 0;
}
