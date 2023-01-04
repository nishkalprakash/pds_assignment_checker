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
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
           int a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
          }
        }  
    }
    
    for(int i=0;i<n;i++){
      if(arr[i]<10){
       int a=arr[0];
       arr[0]=arr[i];
       arr[i]=a;
      }
    }
    
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
           int a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
          }
        }  
    }
    
      printf("output array:");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }
  return 0;
  }
