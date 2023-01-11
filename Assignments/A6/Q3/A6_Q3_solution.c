#include<stdio.h>
#include<stdlib.h>


/*****************************************************************************
 * Merge two sorted arrays and return the resulted sorted array.
 * 
 * @param size1 Size of array A
 * @param size2 Size of array B
 * @param ptr1 pointer to a sorted integer array A
 * @param ptr2 pointer to a sorted integer array B
 * 
 * @return pointer to the resulted sorted array by merging array A and B.
******************************************************************************/
int *Merge(int size1, int size2, int *ptr1, int *ptr2){
    int *res = (int *) malloc(sizeof(int)*(size1+size2));
    int p1=0,p2=0;
    int i=0;

    while(p1!=size1 && p2!=size2){
        if(ptr1[p1]<=ptr2[p2]){
            res[i] = ptr1[p1];
            p1++;
        }
        else{
            res[i] = ptr2[p2];
            p2++;
        }
        i++;
    }

    while(p1!=size1){
        res[i] = ptr1[p1];
        p1++;
        i++;
    }

    while(p2!=size2){
        res[i] = ptr2[p2];
        p2++;
        i++;
    }
    
    return res;
}


/******************************************************************************
 * Main function.
 *****************************************************************************/
int main(){
    int size1;
    printf("Enter size of array A: ");
    scanf("%d",&size1);
    int *arr1 = (int *)malloc(sizeof(int)*size1);
    printf("Enter the %d values of array A: ",size1);
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }


    int size2;
    printf("Enter size of array B: ");
    scanf("%d",&size2);
    int *arr2 = (int *)malloc(sizeof(int)*size2);
    printf("Enter the %d values of array B: ",size2);
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }

    printf("Array A: ");
    for(int i=0;i<size1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("Array B: ");
    for(int i=0;i<size2;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    printf("Array C: ");
    int *res = Merge(size1,size2,arr1,arr2);
        for(int i=0;i<size2+size1;i++){
        printf("%d ",res[i]);
    }

}