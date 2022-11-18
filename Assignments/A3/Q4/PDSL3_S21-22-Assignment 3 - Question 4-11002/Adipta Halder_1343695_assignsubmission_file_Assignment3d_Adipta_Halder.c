/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 3d
*/
#include<stdio.h>

//I have to take n(no. of array elements) as a parameter of the function to run loops inside
int linear_search(int a[], int x,int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int bin_search(int a[], int x,int n){
    int lo,hi,i,mid;
    lo=0;
    hi=n-1;
    mid=(hi+lo)/2;
    while(lo<=hi){
        if(a[mid]<x){
            lo=mid+1;
        }
        else if(a[mid]==x){
           return (mid);
        }
        else{
            hi=mid-1;
        }
        mid=(lo+hi)/2;
    }
    if(lo>hi){
        return -1;
    }
}

int main(){
    int n,op,i,dummy=0,x,ans1,ans2;
    printf("Enter number of elements n: ");
    scanf("%d",&n);
    int a[n];
    do{
        dummy=0;
        printf("Enter the elements in sorted order: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i+1]<a[i]){
            printf("Not sorted. Enter again\n");
            dummy=1;
            break;
        }
    }
    }while(dummy==1);
    printf("Enter the key element x, which you want to search: ");
    scanf("%d", &x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search: \n");
    scanf("%d",&op);
    if(op==1){
        printf("Executing the linear search algorithm\n");
        ans1=linear_search(a,x,n);
        if(ans1!=-1){
            printf("Successful search\n");
            printf("Element %d has been found at the index %d",x,ans1);
        }
        else if(ans1==-1){
            printf("%d\nUnsuccessful search",ans1);
        }
    }
    if(op==2){
        printf("Executing the binary search algorithm\n");
        ans2=bin_search(a,x,n);
        if(ans2!=-1){
            printf("Successful search\n");
            printf("Element %d has been found at the index %d",x,ans2);
        }
        else if(ans2==-1){
            printf("%d\nUnsuccessful search",ans2);
        }
    }
 return 0;
}

