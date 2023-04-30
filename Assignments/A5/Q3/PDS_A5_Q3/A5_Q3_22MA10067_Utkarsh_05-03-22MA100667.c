
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 5
* Description : Program to
*/
#include <stdio.h>
#include <math.h>
#define N 100
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;}
void reverse(int *a,int n){
    for (int i=0;i< n/2 ;i++) {
        swap(a[i],a[n-1-i]);
    }
    for (int i=0;i<n;i++) {printf("%d ",a[i]);}

}

void cyclicShift(int *a, int direction){
    if (direction==1) {

    }
    else {

    }


}

int main()
{
    int direc,arr[N],n;
    printf("Enter the size and direction of the array: ");
    scanf("%d%d",n,direc);
    int const y=n;
    for (int j=0;j<n;j++){
            scanf("%d",&arr[j]);}
    printf("Original Array: ");
    for (int i=0;i<n;i++) {printf("%d ",arr[i]);}
    printf("Array after reverse:");
    reverse(arr,n);
    if (direc==1) {
        printf("Array after left cyclic shift:");



        }
    else {
        printf("Array after right cyclic shift:");


        }

    return 0;

}







