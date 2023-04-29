/*sec2
Assignment no.6
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 3
*/
#include<stdio.h>
int n;
void swap(int *p, int *q){
*p= *p+*q;
*q= *p-*q;
*p=*p-*q;
}
void reverse(int *a){
    for(int i =0 ;i<n/2;i++){
        swap(&a[i],&a[n-i-1]);
    }


}
void cyclicShift(int*a,int direction){
    if (direction ==1){
        for(int i =0 ; i < n-1 ; i++){
       swap(&a[i],&a[i+1]);
            }
    }
    else{
        for(int i =n-1 ; i > 0 ; i--){
       swap(&a[i],&a[i-1]);
    }
    }

}

int main()
{
    int d;
    printf("Enter the size of the array and direction");
    scanf("%d %d",&n,&d);
    int arr[n];
    printf("Enter %d integers",n);
    for(int i= 0 ; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array");
    for(int i= 0 ; i<n; i++){
        printf(" %d",arr[i]);
    }

    printf("\n");
    reverse(arr);
    printf("Array after reverse");
   for(int i= 0 ; i<n; i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
    cyclicShift(arr,d);
    printf("Array after cyclic");
   for(int i= 0 ; i<n; i++){
        printf(" %d",arr[i]);
    }

    return 0;
}
