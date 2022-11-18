
#include<stdio.h>
#include<stdlib.h>

int main(){
    //declaring variables
    int n;
    int b;
    int* A = (int*)calloc(n,sizeof(int));
    int max=A[0];
    int min=A[0];
    int diff = max-min;
    int* no_of_elements_in_bin = (int*)calloc(b+1,sizeof(int));
    int* bin_boundaries = (int*)calloc(b+1,sizeof(int));
    int** elements_in_bin= (int*)calloc(b+1,sizeof(int));
    
    
    printf("Enter no. of array elements : ");
    scanf("%d", &n);                           //taking n input from user
    printf("Enter array elements : ");
    for(int i=0; i<n; i++)
    scanf("%d", &A[i]);                        //taking elements of array from user
    printf("Enter no. of bins : ");
    scanf("%d", &b);                           //taking no. of bins from user

    for(int i=0; i<n; i++){
        if(A[i]>max)
            max = A[i];

        if(A[i]<min)
            min = A[i]; }

    for(int i=1; i<=b; i++)    {
        no_of_elements_in_bin[i]=0;}
  
    bin_boundaries[0] = min;
    
    for(int i=1; i<=b; i++){
        bin_boundaries[i] = bin_boundaries[i-1] + (diff/b)+1;
        bin_boundaries[i-1] = bin_boundaries[i-1] - 1;}

    for(int i=1; i<=b; i++)
        elements_in_bin[i] = (int*)calloc(n,sizeof(int));

    for(int i=1; i<=b; i++){
        int k=0;
        for(int j=0; j<n; j++){
            if( (A[j]>=(bin_boundaries[i-1]+1)) && (A[j]<=bin_boundaries[i]) ){
                elements_in_bin[i][k] = A[j];
                no_of_elements_in_bin[i]++;
                k++;}}}

    for(int i=1; i<=b; i++){
        printf("Bin %d --> ", i);
        for(int j=0; j<no_of_elements_in_bin[i]; j++){
            printf(" %d, ",elements_in_bin[i][j]);}
        printf(" No. of elements in Bin %d = %d \n",i,no_of_elements_in_bin[i]);}     //printing required output
    return 0;}
