#include<stdio.h>
/*
   sec-2
   Assignment no.- 6
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 3
*/

void swap(int *p , int *q){
   int temp = *p;
   *p = *q;
   *q = temp;
}

void reverse(int *a, int n){
    if(n%2==1){
         for(int i=0; i<=n/2; i++) swap(a+i, a+n-i-1);
    }
    else{
         for(int i=0; i<=n/2-1; i++) swap(a+i, a+n-i-1);
    }
}

void cyclicshift(int *a, int n, int j){
    if(j==1){
        for(int i=0; i<n-1; i++) swap(a+i, a+i+1);
    }
    else{
        for(int i=n-1; i>0; i--) swap(a+i, a+i-1);
    }
}

int main(){
    int n,d;
    printf("Enter the size of the array and direction: ");
    scanf("%d %d", &n, &d);
    int arr[n];
    printf("Enter 5 integers: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("\nOriginal array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    reverse(arr, n);
    printf("\nArray after reverse: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    //reverse(arr, n);
    if(d==1){
        printf("\nArray after left cyclic shift: ");
        cyclicshift(arr, n, d);
        for(int i=0; i<n; i++) printf("%d ", arr[i]);
    }
    else{
        printf("\nArray after right cyclic shift: ");
        cyclicshift(arr, n, d);
        for(int i=0; i<n; i++) printf("%d ", arr[i]);
    }

return 0;
}
