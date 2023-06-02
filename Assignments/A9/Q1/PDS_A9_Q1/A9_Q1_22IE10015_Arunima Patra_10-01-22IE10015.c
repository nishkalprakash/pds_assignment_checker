//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>


int main(){
    int n, count=0;;
    printf("Enter the value:");
    scanf("%d", &n);
    int arr[300];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=300; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    if(n<0){
        printf("Please give positive number");
    }
    else{
      for(int i=0; i<=300; i++){
        if(n==arr[i]){
            printf("The fibonacci number is:%d", n);
        }

      }
      for(int i=0; n>arr[i]; i++){
         count=i;
      }
      if(n-arr[count]>arr[count+1]-n){
        printf("Nearest fibonacci number:%d", arr[count+1]);
      }
      else if(n-arr[count]<arr[count+1]-n){
        printf("Nearest fibonacci number:%d", arr[count]);
      }
    else{
        printf("Nearest fibonacci number:%d", arr[count]);
    }
    }
return 0;










}

