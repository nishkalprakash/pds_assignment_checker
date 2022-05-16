/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
int linear_search(int arr[],int n,int x);
int bin_search(int arr[],int n,int r,int x);
int main(void){
    int n,x,alg,i,arr[100];
    printf("enter the elements in sorted order:");
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("array is not sorted,please enter a sorted array");
            return ;
        }
    }
    printf("enter the key element x,which you want to search:");
    scanf("%d",&x);
    printf("choose the algorithm\n Type 1 for linear search and 2 for binary search");
    scanf("%d",&alg);
    if(alg==1){
        int result=linear_search(arr,n,x);
        (result==-1)? printf("element is not present in the array"):printf("element is present at index %d",result);
        return 0;
    }
    else if(alg==2){
        int result=bin_search(arr,0,n-1,x);
        (result==-1)? printf("element is not present in the array"):printf("element is present at index %d",result);
        return 0;
    }

}
int linear_search(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==x)
            return i;
        return -1;
}
int bin_search(int arr[],int n,int r,int x){
    if(r>=n){
        int mid=n+(r-n)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x)
            return bin_search(arr,n,mid-1,x);
            return bin_search(arr,mid+1,r,x);
    }
    return -1;
}


