/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/
#include<stdio.h>

int binsearch(int A[ ], int low, int high, int k) {
    int mid;
    if (low > high)
        return -1;
    mid = (low + high)/2;
    if (A[mid] == k)
        return mid;
    else {
        if (A[mid] > k)
            return (binsearch(A, low, mid - 1, k));
        else
            return (binsearch(A, mid + 1, high, k));
    }
}

int linsearch(int A[ ], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (A[i] == k) {
            return i;
        }
    }
    return -1;
}


int main(){
    int n, num, k;
    printf("Enter the number of elements n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in sorted order: ");
    for(int j=0; j<n; j++){
        scanf("%d", &arr[j]);
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            printf("Not sorted. Enter again\n");
            return 0;
        }
    }
    printf("Enter the key element x, which you want to search: ");
    scanf("%d", &k);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search: ");
    scanf("%d", &num);
    if(num == 1){
        int req_num;
        req_num = linsearch(arr, n, k);
        if (req_num == -1)
            printf("%d is not present in the array\n", k);
        else 
            printf("%d is present in the array at index %d\n", k, req_num);
    }

    else if(num == 2){
        int req_num;
        req_num = binsearch(arr, 0, n-1, k);
        if (req_num == -1)
            printf("%d is not present in the array\n", k);
        else 
            printf("%d is present in the array at index %d\n", k, req_num);
    }
        
        
    else{
        printf("Please input 1 or 2 only\n");
    }

    return 0;
}