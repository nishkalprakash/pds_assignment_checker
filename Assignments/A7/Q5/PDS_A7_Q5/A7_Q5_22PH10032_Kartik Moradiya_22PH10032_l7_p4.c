#include<stdio.h>

 int main()
 {
   int n;
  printf("enter the value of n:");                //input size from array
  scanf("%d",&n);
  
    int arr[10];
    for(int i=0;i<n;i++){                      //input in array
     scanf("%d",&arr[i]);
    }
   
   for(int i=0,count=0;i<n;i++){                        //condition for order
       for(int j=0;j<i;j++){
         if(arr[i]>=arr[j]){
          count++;
         }
       }
     
      for(int j=i+1;j<n;j++){
        if(arr[i]<=arr[j]){
        count++;
        }
      }
      printf("%d",count);
      if(count==n*n*n){
      return i;
      } 
      else {
      return -1;
      } 
      
   }
  return 0;
 }
