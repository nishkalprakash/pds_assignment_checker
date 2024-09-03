#include<stdio.h>
#define N 100

int main(){

int arr[N], n,a;

scanf("%d",&n);

for(int i=0;i<n;i++)
{
   scanf("%d ",&arr[i]);
   
}

printf("Original Array: ");
for(int j=0; j<n;j++)
{
 printf("%d ",&arr[j]);
 
}
  for(int k=0; k<n;k++)
  {
     if(arr[k] == arr[k + 1])
     {  arr[k+1] = a;
        arr[k+2] = arr[k+1];
        a = arr[k+2];
     }
  }
  printf("Unique Array: ");
  for(int l=0;l<n;l++)
  printf("%d ",&arr[l]);
   
}
