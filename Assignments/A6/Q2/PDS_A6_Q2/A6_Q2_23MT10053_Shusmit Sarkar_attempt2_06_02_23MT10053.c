#include<stdio.h>
#include<stdlib.h>
int arr[30];
int sum(int arr[],int n){
    if (n<1) return 0;
    int s =0;
    s = arr[n-1] + sum(arr,n-1);
    return s;
}
int max(int arr[],int n){
    if (n==1) return arr[n-1];
    int M =0;
    if (M < max(arr,n-1))
        M = arr[n-1];
    return M;
}
void reverse(int l, int r){
    if(l>r)return;
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    reverse(l+1, r-1);
}
int main (){
    int a;
    for(int i=0; i<30; i++) {
        a = 20 + ( rand()%11 );
        arr[i] = a;
    }
    for(int i=0; i<30; i++) {
    printf("arr[%d] = %d\n",i,arr[i]);
    }
    int s = sum(arr,30);
    printf("\nThe sum is %d",s);
    int M = max(arr,30);
    printf("\nThe Max is %d",M);
    reverse(0,29);
    printf("\nReverse array is\n");
    for(int i=0; i<30; i++) {
    printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
