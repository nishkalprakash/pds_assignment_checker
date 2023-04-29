/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment 05
*/
#include <stdio.h>
#define N 100
int main(){
    int arr[100];
    int  n,temp,k=0;
    printf("Enter the size (<%d) :: ",N);
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array :: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]<0){
                temp = arr[i];
                for (int j=i;j>k;j--){
                    arr[j]=arr[j-1];

                }
                arr[k]=temp;
                k++;
            }
        }

    printf("\nRearranged array :: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
