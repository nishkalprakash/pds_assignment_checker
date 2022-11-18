/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>

//function to return the maximum Alpha value
int maxAlphaValue(int S[], int n) {
    int max=0;
    for(int i=1; i<n; i++){
        int count=0;
        for(int j=0; j<i; j++){
            if(S[j]%S[i] == 0){
                count++;
            }
        }
        if(count > max){
            max = count;
        }
    }
    return max;
}

int main(){
    int n, max;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array:");
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    max = maxAlphaValue(array, n);
    printf("Output : %d\n", max);
    return 0;
}