//Name -Modi Meet
//Roll no-22ME10053
//Lab Ques-05-01
//Sorting the positive and negative numbers of array


#include<stdio.h>
#include<math.h>
#define N 100

int main(){
    int A[N];
    int n;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    int temp;
    if(n>100) {printf("ERROR"); return 1;}
    printf("Enter the array elements :");

    for(int i=0;i<n;i++) scanf("%d",&A[i]);

    printf("The original Array is : \n");

    for(int j=0;j<n;j++) printf("%d ",A[j]);

    for(int i=0;i<n;i++){
        if(A[i]>0) continue;
        else{
            int j=i-1;
            while(A[j]>0 && j>0){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                j--;
            }
        }

    }

    printf(" \nThe rearranged array is : ");
    for(int i=0;i<n;i++) printf("%d ",A[i]);




    return 0;
}

