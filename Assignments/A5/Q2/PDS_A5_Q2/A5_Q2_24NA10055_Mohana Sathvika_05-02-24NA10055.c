#include<stdio.h>
int main(){
   int n;
   int arr[n];
   int i;
   for(i=0;i<=n;i=i+1){
   scanf("%d",&arr[i]);
   }
   for(i=0;i<=n;i=i+1){
        int k;
        for(k=n-1;k>=0;k=k-1){
               if(arr[i]==arr[k]){
                      while(k<=n){
                        int temp;
                        temp=arr[k+1];
                        arr[k+1]=arr[k];
                        arr[k]=temp;
                        k=k+1;
                        }
                       }
                      }
                     }
  printf("unique array:");                   
  for(i=0;i<=n;i=i+1){
          printf("%d", arr[i]);    }
          }      
