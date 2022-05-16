/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element){
    int low=0, mid, high=size-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}
int sorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])
        return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("enter the number of elements n:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in sorted order: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(sorted(a,n)!=1)
    {
        printf("Not sorted. Enter again\n");
        printf("Enter the elements in sorted order:");
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    }
    int e;
    printf("Enter the key element x, which you want to search:");
    scanf("%d",&e);
    int c;
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search:");
    scanf("%d",&c);

if(c==1){
printf("Executing the linear search algorithm\n");
printf("Successful search\n");
printf("Element %d has been found at the index %d",e,linearSearch(a,n,e));
}
else{
printf("Executing the binary search algorithm\n");
printf("Successful search\n");
printf("Element %d has been found at the index %d",e,binarySearch(a,n,e));
}
return 0;
}
