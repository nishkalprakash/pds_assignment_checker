#include<stdio.h>
int main()
    {
         int n;
         int arr[n];
         
         int i;
         printf("enter the number of elements :");
         scanf("%d",&n);
         if ((n>100) || (n<0))
         {
            printf("ERROR:n>100");
         }
         for (i=0;i<n;i++)
            scanf("%d",&arr[i]);
            
        
         
         
            printf("original array : %d",arr[i]);
        
         
         if(arr[i] < 0 || arr[i] > 0){
         printf("Rearranged array : %d",arr[i]);
         }
         
             
                
         return 0;
    }     
         
        
         
