/*Name - Vedant Katole
roll no - 22EC10087
Section - 2
Lab no - 5
problem No - 3
Description - pointers*/

#include<stdio.h>

void swap(int *a,int *b);
void reverse(int a[], int n);
void cyclicshift(int a[], int n, int direction);

int main(){
    int arr[10000], n, direction;
    printf("Enter the size of the array and direction: ");
    scanf("%d%d", &n, &direction);
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("\n\nOriginal Array: ");
    for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);

    reverse(arr, n);
    cyclicshift(arr, n, direction);
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int a[], int n){
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    printf("\nArray after reverse: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

void cyclicshift(int a[], int n, int direction){
    int temp;
    if(direction == 1){
            temp = a[0];
        for(int i=0; i<n-1; i++){
            a[i] = a[i+1];
        }
        a[n-1] = temp;
    }
    else{
        temp = a[n-1];
        for(int i = 1; i<n; i++){
            a[i] = a[i-1];
        }
        a[0] = temp;
    }
    printf("after cyclic shift: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}



