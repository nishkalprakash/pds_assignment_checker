#include<stdio.h>

 int main()
 {
  int n;
  printf("enter the value of n:");
  scanf("%d",&n);
  
    int arr[100];
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(arr[i]>arr[j]){
           int a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
          }
        }
    }
   
    printf("output array:");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
 return 0;
 }
