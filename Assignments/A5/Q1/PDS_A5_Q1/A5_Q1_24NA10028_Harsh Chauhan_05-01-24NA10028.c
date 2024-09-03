#include<stdio.h>
#define N 100

int main(){

   int arr[N], n , x;
   
   
   scanf("%d\n",&n);
   
   for(int i=0; i < n ; i++){
   
   scanf("%d",&arr[i]);
   }
   
   printf("Original Array: ");
   
   for(int k =0;k < n ; k++)
   {
      printf("%d ",arr[k]);
   } 
    printf("\n");
   for(int j=0; j < n;j++)
   {  
     if(arr[j] < 0 && arr[j-1] > 0)
     {
       arr[j] = x;
       arr[j-1] = arr[j];
       x = arr[j-1];
     }
     }
   
   printf("Rearranged array: ");
   for(int l=0;l<n;l++)
   {
      printf("%d ",arr[l]);
   }
   printf("\n");

return 0;  
   
}
