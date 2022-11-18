/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

//function to divide and categorize numbers in respective bins 
void ptr(int num,int n, int min, int max, int element[]){
    int A[n];
    int temp1[num];
    int **w = (int**)malloc(sizeof(int*) * num);
    for(int i=0; i<num; i++){
        int k=0;
        for(int j=0; j<n; j++){
            if( (min + ((i*(max-min))/num) <= element[j]) &&( element[j] <= min + ((i+1)*(max-min))/num) ){
                A[k] = element[j];
                k++;
            }
        }
        temp1[i] = k;
        w[i] = (int*)malloc(k*sizeof(int));
        for(int x=0; x<k; x++){
            w[i][x] = A[x];
            printf("%d ",A[x]);
        }
        k=0;
        printf("\n");
    }
}

int main(){
    int n, num, max = INT_MIN, min = INT_MAX;
    printf("Enter the numner of array elements: ");
    scanf("%d", &n);
    int element[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &element[i]);
        if(element[i] > max)    max = element[i];
        if(element[i] < min)    min = element[i];
    }
    printf("Enter the number of bins: ");
    scanf("%d", &num);

//calling the function
    ptr(num, n, min, max, element);
    return 0;
}