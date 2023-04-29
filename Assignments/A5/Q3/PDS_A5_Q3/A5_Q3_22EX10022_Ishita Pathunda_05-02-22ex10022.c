#include<stdio.h>
void swap(int *p,int *q);
void reverse(int arr[100]){
    int n;
    scanf("%d",&n);
    int l=n-1,temp,i,arr[100];
    for(int i=0; i<l;i++,l--){
        temp=arr[i]
        arr[i=[l];
        arr[l]=temp;
    }
    return(arr[l]);
    }
int main(){
    int arr[100],size,direction;
    printf("enter the size of array and direction:");
    scanf("%d %d"&size,&direction);
    printf("\n enter 5 integer:");
    for(int i=0;i<size;i++){
        scanf("%d ",&arr[i]);
    }
    printf("\n original array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("array after reverse:");
    printf("array after right cycle:");
    return 0;
}
