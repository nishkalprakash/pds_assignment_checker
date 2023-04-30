//name-yash agarwal
//section - 2
// roll.no - 22na10049
//program to shift -ve numbers in array
#include <stdio.h>
#define N 100

int main()
{
  int n,b,t;

  scanf("%d",&n);
  if (n>N)
  {
      printf("Error : n > 100 \n");   // if the input is grater than  100
      return 0;
  }
  int arr[n];

  for(int i=0;i<n;i++)
  {
      scanf("%d",&b);
      arr[i]=b;   // taking input


  }


  printf("original array : ");
     for(int i=0;i<n;i++)
  {
      printf("%d  ",arr[i]);   //  output original array
  }



  for(int j=0;j<n;j++)
  {
      for(int z=0;z<n;z++)
      {
          if(arr[j]<0 && arr[z]>0)   // swapping  the negatives
          {
            t=arr[j];   //temporary variable
            arr[j]=arr[z];
            arr[z]=t;

          }
      }
  }

printf("\n rearranged array : ");
   for(int i=0;i<n;i++)
  {
      printf("%d ",arr[i]);   //  output


  }
  return 0;

}
