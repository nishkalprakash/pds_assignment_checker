#include<stdio.h>

void swap(int *x,int *y){
    int p=*y;
    *y=*x;
    *x=p;
}

void reverse(int *arr,int size){
    swap(&arr[0],&arr[size-1]);
    if(size==1){
        return;
    }
    reverse(&arr[1],size-2);

//    reverse(&(arr+1),size-2);
    /*int temp=*arr;
    *arr=*(arr+size-1);
    *(arr+size-1)=temp;
    reverse(&(arr+1),size-2);*/
}

void cyclicShift(int *arr,int direction,int n){
    if(direction==1){
            arr[n-1]=arr[0]
        for(int i=0;i<n;i++){
            int temp=arr[i];
            arr[i]=arr[i+1];
        }
    }
}


int main(){
    /*int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);*/

    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int *A;
    A=(int *)malloc(n * sizeof(int));
    //int A[100];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    printf("Original array: \n");
    for(int j=0;j<n;j++){
        printf("%d ",A[j]);
    }

    reverse(A,n);
    printf("\nArray after reverse: \n");
    for(int j=0;j<n;j++){
        printf("%d ",A[j]);
    }




}
