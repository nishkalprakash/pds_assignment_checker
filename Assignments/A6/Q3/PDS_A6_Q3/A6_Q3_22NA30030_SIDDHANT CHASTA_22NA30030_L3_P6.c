/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 6
Description :A program to merge two sorted arrays and return the resulting sorted array 
*/

#include<stdio.h>

int Merge(int size1,int size2,int *p1,int *p2 );

int main(){
    int size1,size2,arr1[10],arr2[10];
    printf("enter size1 : ");
    scanf("%d",&size1);
    printf("enter values : ");
    for(int i=0;i<size1;i++){
            scanf("%d",&arr1[i]);
   }
   
    printf("enter size2 : ");
    scanf("%d",&size2);
    printf("enter values : ");
    for(int i=0;i<size2;i++){
            scanf("%d",&arr2[i]);
   }
      return Merge(size1,size2,arr1,arr2);
}


int Merge(int size1,int size2,int *p1,int *p2){

       
        printf("A = ");
        for(int i=0;i<size1;i++){
            printf("%d ",*(p1+i));
   }
        printf("\n");
        printf("B = ");
        for(int i=0;i<size2;i++){
            printf("%d ",*(p2+i));
   }
         
        printf("\n");
        printf("C=");
        if(size1>size2)
          for(int j=0;j<size1;j++){
          if (p1<p2)
          printf("%d ",*(p1+j));
       }
       else 
           for(int j=0;j<size2;j++){
          if (p2<p1)
          printf("%d ",*(p2+j));
       }
        
}
        

