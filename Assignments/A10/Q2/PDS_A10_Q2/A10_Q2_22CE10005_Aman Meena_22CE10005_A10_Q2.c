
/*
Section 14

Roll No : 22CE10005

Name : #Aman Meena#

Assignment No : 9

Description :TO check the list is sorted in ascending or descending order*/

#include<stdio.h>

struct list  {
   int arr[100];
};
 int main()  {

         int arr[100],i,n;

         printf("Enter the value of n  :\n");
         scanf("%d",&n);

         for(i=0;i<n;i++){
            printf("Enter Element %d :\n",i);
            scanf("%d",&arr[i]);
         }

        
            if(arr[i]<arr[i+1]){
              printf("The link list is in ascending order\n");

         }else if(arr[i]>arr[i+1]){
         printf("The link list is in descending order \n");

         }else  {
         printf("The link list is not in a sorted order\n");
         
         }        
         }

