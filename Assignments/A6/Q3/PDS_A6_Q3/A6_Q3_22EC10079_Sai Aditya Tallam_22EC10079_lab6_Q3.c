#include<stdio.h>


int Merge(int size1,int size2,int * ptr1,int * ptr2);

int main(){
       
      int A,B;
      int size1,size2; 
     
     int array1[size1],array2[size2]; 
     
     
 
     printf("enter size:");
     scanf("%d",&size1);
     printf("enter the values");
     for(int i=0;i<size1;i++)
         {
            scanf("%d",&array1[i]);
            }

     printf("enter size:");
     scanf("%d",&size2);
     printf("enter the values");
     for(int i=0;i<size2;i++)
         {
            scanf("%d",&array2[i]);
            }
    
        printf("A=");
       for(int i=0;i<size1;i++)
         {
           printf("%d ",array1[i]);
            }
         printf("\n");
      printf("B=");
      for(int i=0;i<size2;i++)
           {  
                printf("%d ",array2[i]);
              }
     printf("\n");
     Merge(size1, size2, array1, array2);
     return 0;
    }



 int Merge(int size1,int size2,int* ptr1,int* ptr2){
      
        int array1[size1],array2[size2];  
           
    
        
    
     printf("C=");
     for(int i=0;i<size1;i++)
        {
           printf("%d ",ptr1[i]);
         }
     for(int i=0;i<size2;i++)
         {
           printf("%d ",ptr2[i]);
          }
      return 0;
     }
     
          
           
        


 



















      
     
