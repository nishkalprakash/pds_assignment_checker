#include<stdio.h>
#include<math.h>
   int merge(int size1, int size2, int* ptr1, int* ptr2){
     int arr1[size1],arr2[size2];
     int arr[size1 + size2],k=0;
     printf("C=");
     for(int i=0;  i<size1;i++){
       for(int j=0; j<size2;j++){
         if(ptr1[i]<ptr2[j]){
         arr[k]=ptr1[i];
         k++;
         }else{
           arr[k]=ptr2[j];
           k++;
         }
       }
     }
       
       for(int i=0; i<size1 +size2;i++){
         printf("%d",arr[i]);
       }
     return 0;    
   }
   int main()
   {
     int a,b,size1,size2;
     int arr1[size1],arr2[size2];
       
       printf("enter the size:");
       scanf("%d",&size1);
       printf("enter the value");
 
      for(int i=0;i<size1;i++){
      scanf("%d",&arr1[i]);
      }
      
      
       printf("enter the size:");
       scanf("%d",&size2);
       printf("enter the value");
 
      for(int i=0;i<size2;i++){
      scanf("%d",&arr2[i]);
      }
       
       printf("A=");
       for(int i=0;i<size1;i++){
       printf("%d",arr1[i]);
      }
     
        printf("B=");
       for(int i=0;i<size2;i++){
       printf("%d",arr2[i]);
      }
      printf("\n");
      merge(size1,size2,arr1,arr2);  
   return 0;
   }
