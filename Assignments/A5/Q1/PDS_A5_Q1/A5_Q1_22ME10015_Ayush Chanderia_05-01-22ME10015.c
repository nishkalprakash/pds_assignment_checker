/* Section 2
Roll no: 22ME10015
Name: Ayush chanderia
Assignment number :5
Description: Program to*/
#include <stdio.h>
#define N 100
int main(){
    int arr[N];
    int n,j=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    if(n>N){
        return printf("Error: n>100\n");
    }

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Original array:");
    for(int i=0;i<n;i++){

        printf("%d\t",arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            int temp=arr[i];
            for(int k=i;k>j;k--){
                arr[k]=arr[k-1];
            }
            arr[j]=temp;
            j++;
        }
    }

    printf("\n");
    printf("Rearranged array: ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }



    return 0;
}
