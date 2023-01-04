/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 7*/
#include<stdio.h>
#define max_size 100


void sort_des(int arr[],int size)
{
  for(int i=0;i<size;i++)
 {
   for(int j=i+1;j<size;j++)
    { 
     if(arr[j]>arr[i])
     {
       int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
     }
  
printf(" %d",arr[i]);
}
}   

int main()
{
  int arr[max_size];
  int n,i,j;
  printf("Enter the size of array:\n");
  scanf("%d",&n);
  
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

printf("the largest number is:\n");
sort_des(arr,n);
return 0;
}










