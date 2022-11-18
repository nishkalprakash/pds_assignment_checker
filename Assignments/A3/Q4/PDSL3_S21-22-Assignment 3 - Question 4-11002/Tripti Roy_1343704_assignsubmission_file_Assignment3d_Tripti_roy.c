# include<stdio.h>
# define SIZE 20
int ArrSortedCheck(int arr[], int k){
    if(k==1||k==0){
        return 1;
    }
    if(arr[k-1]<arr[k-2]){
        return 0;
    }
    return ArrSortedCheck(arr,k-1);
}
void linear_search(int arr[], int element){
    int i;
    for(i=0;i<SIZE;i++){
            if(arr[i]==element){
                break;
                }
            }
            if(i<SIZE){
                printf("Element found at index %d\n", i);
            }
            else {
                    printf("Element not found.\n");
            }
}
int bin_search(int array[], int y, int low, int high){
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (array[mid] == y){
        return mid;
        }
        if (array[mid] < y){
        low = mid + 1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n, a[20], i, x, alg, result;
    printf("Enter the  number of elements.\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    if(ArrSortedCheck(a, n)){
            printf("Array is in sorted order\n");
            printf("Enter the key element x, which you want to search: \n");
            scanf("%d", &x);
            printf("Choose the algorithm: Type 1 for linear search and 2 for binary search\n");
            scanf("%d", &alg);
            if(alg==1){
                printf("Executing Linear search algorithm.\n");
                linear_search(a,x);
            }
            if(alg==2){
                printf("Executing binary search algorithm.\n");
                result=bin_search(a, x, 0, n-1);
                if(result==-1){
                    printf("Element not found.\n");
                }
                else{
                        printf("Successful search.\n");
                    printf("Element found in the array.\n");
                }

            }

    }
    else{
      printf("Array is not in sorted order.Enter the elements again.\n");
    }

    return 0;
}
