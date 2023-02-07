#include<stdio.h>
void ascending(int arr[], int n);
int main(){
int n;                        //asking to input length of the array
printf("enter the length of the array:");
scanf("%d", &n);
int n1=n+1;
int arr[n1];                    //making an array having n+1 terms
for(int i=0; i<n ; i++){
    printf("enter %d element:", i+1);
    scanf("%d", &arr[i]);            //taking input of n terms of array
}
printf("enter a number which you want to add:");
scanf("%d", &arr[n]);                // asking to input another num which user wants to add in the array
ascending(arr,n1);
printf("output array:");
for(int i=0;i<n1; i++){                // printing the array elements
    printf(" %d ", arr[i]);
}
printf(" \n");
return 0;
}
void ascending(int arr[], int n){            // function to arrange array elements in ascending order
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
