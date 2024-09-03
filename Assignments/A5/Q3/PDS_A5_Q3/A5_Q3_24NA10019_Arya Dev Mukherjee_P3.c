#include<stdio.h>
int main(){
    int n;
    int arr[n];
    printf("How many terms: ");
    scanf("%d", &n);
    if(n>100){
        printf("Error: n >100");
        }
    for(int i=0; i<n; i++){
        printf("\nEnter Number: ");
        scanf("%d", &arr[i]);
        }
 //we have taken the array, now we display it.       
    printf("\nOriginal Array: ");
     for(int i=0; i<n; i++){
        printf(" %d", arr[i]);
        }
