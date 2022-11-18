/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Assignment class: 5
*/
#include <stdio.h>

int main(){
    int m,n,k;
    printf("enter the matrix:");

    scanf("%d\n",&m);

    scanf("%d\n",&n);

    int arr[100][100];
    int ker[100][100];
    int arr2[100][100];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                printf("enter array elements:");
                scanf("%d",&arr[i][j]);//storing values in the 2D array
    }
    }
    printf("enter order of kernel matrix:");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
                printf("\nenter kernel elements:");
                scanf("%d",&ker[i][j]);
    }
    }
    for(int i=(k-1)/2;i<m-(k-1)/2;i++){
            for(int j=(k-1)/2;j<n-(k-1)/2;j++){
                    for(int l=0;l<k;l++){
                            for(int m=0;m<k;m++){
                    arr2[i][j]+=(arr[i-((k-1)/2)+l][j-((k-1)/2)+m]*ker[l][m]);//assigning the computed values to a new array

                            }
                    }
    }
    }

    for(int i=(k-1)/2;i<m-(k-1)/2;i++){
            for(int j=(k-1)/2;j<n-(k-1)/2;j++){
                printf("%d ",arr2[i][j]);
    }
    printf("\n");
    }



}
