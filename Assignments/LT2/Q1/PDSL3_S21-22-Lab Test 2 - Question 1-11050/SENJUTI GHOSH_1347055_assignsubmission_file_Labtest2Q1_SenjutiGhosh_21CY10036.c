/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
/*finds and prints the largest sum and the contiguous array giving it*/
void maxsum_Subarray(int arr[],int n){
    /*start=start index of largest sum contiguous array and end=end index of the same*/
    /*max stores the value of current largest sum*/
    /*sum calculates the sum of contiguous elements*/
    int start=0,end=0;
    int max=arr[0];
    for (int i=0;i<n;i++){
        int sum=0;
        for (int j=i;j<n;j++){
            sum+=arr[j];
            if (sum>max){
                start=i;
                end=j;
                max=sum;
            }
        }
    }
    printf("\nThe contiguous array with maximum sum is\n");
    /*printing the largest contiguous array*/
    for (int k=start;k<=end;k++){
        printf("%d",arr[k]);
    }
    /*printing the largest sum*/
    printf("\nThe largest sum is:%d",max);
    return;
}
/*Main function*/
int main(){
    int arr[20];
    int n;
    printf("Enter value of n between 1 and 20\n");
    scanf("%d",&n);
    printf("Enter array elements");
    /*user inputs of array elements*/
    for (int j=0;j<n;j++){
         scanf("%d",&arr[j]);
    }
    maxsum_Subarray(arr,n);
    return 0;
}
