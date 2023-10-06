//NAME : AYUSH KUMAR SINGH
//ROLL NO.: 23MT10015
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sum(int n, int arr[]){
    if (n<1){return 0;}
    else {return arr[n-1]+sum(n-1,arr);}
}
int max(int n, int arr[]){
    if (n==1){return arr[0];}
    else if (arr[n-1]>max(n-1,arr)){return arr[n-1];}
}
int reverse(int arr[], int f, int l){
    int temp;
    if (f>=l){return 0;}
    else{
    temp = arr[f];
    arr[f]=arr[l];
    arr[l]=temp;
    return reverse(arr,f+1,l-1);
    }

}

int main(){
    int arr[30];
    for (int i=0;i<30; i++){
        arr[i]=((rand()%11)+20);
    }printf("Random elements:\n");
    for(int i=0;i<30; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Sum of array  = %d\n", sum(30, arr));
    printf("Max element of the array = %d\n", max(30,arr));
    reverse(arr,0,29);
    printf("Reverse of the array :\n");
    for(int i=0; i<30;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
