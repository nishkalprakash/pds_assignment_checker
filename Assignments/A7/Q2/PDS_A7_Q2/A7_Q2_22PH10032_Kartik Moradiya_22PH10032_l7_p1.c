#include<stdio.h>


  int main()
  { int n,m;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    
     printf("enter the number m:");
     scanf("%d",&m);
     int count=0;
     for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){ 
      if(arr[i]==arr[j]){
        count++;
       }
      }
     if (count==m){
     printf("%d is repeating %d times",arr[i],m);
     }
     else{
     continue;
     }
   }
  return 0;
  }
