/*Name - Vedant Katole
roll no - 22EC10087
Section - 2
Lab no - 5
problem No - 1
Description - rearrangement of elements of an array*/

#include<stdio.h>
#define N 100

void main(){
    int arr[N], n, temp, i;

    scanf("%d", &n);
    if(n>100)
        printf("\nError: n > 100");
    else{
        for(i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        printf("original array: ");

        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);

        for(int count = 1; count <= n; count++){
                i = 0;
             while(i<n){
                if(arr[i] >= 0 && arr[i+1]<0){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                }
                i++;
             }
        }

        printf("\nRearranged array: ");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }
}
