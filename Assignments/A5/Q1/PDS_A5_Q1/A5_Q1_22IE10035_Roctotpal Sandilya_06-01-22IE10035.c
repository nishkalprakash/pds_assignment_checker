#include<stdio.h>
/*
   sec-2
   Assignment no.- 6
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/
#define N 100

int main(){
    int arr[N], n, k=0, j=0;
    scanf("%d", &n);
    if(n>100){
        printf("Error: n>100");
        return 0;
    }
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Original array: ");
     for(int i=0; i<n; i++) printf("%d ", arr[i]);

    for(int i=0; i<n; i++){
        if(arr[i]>0) break;
        else{
            j++;
        }
    }

    k= j;

    for(int i=j+1; i<n; i++){
        if(arr[i]<0){
            int temp = arr[k];
            arr[k] = arr[i];
            for(int j = i-1; j>k; j--){
                arr[j+1] = arr[j];
            }
            arr[k+1] = temp;
             k++;
        }
    }
    printf("\nRearranged array: \n");
     for(int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}
