/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment 05
*/
#include <stdio.h>
void swap(int *p, int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void reverse(int *a,int s,int e,int n){
    if (s>=e) {
            for (int j=0;j<n;j++){
                printf("%d ",a[j]);
            }
            return 0;
    }
    swap(&a[s],&a[e]);
    reverse(a,s+1,e-1,n);


}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("original array :: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nReverse array :: ");
    reverse(arr,0,n-1,n);

}
