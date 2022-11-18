/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Assignment class: 5
*/
#include<stdio.h>
int main(){
    int m,n,i,j,max=0,min=10000,A[m][n];
    printf("enter no of rows and columns of the matrix:");
    scanf("%d %d",&m,&n);
    printf("enter the elements in the matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            scanf("%d",A[i][j]);
        }printf("\n");

    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(min>A[i][j]){
                min = A[i][j];
            }
            if(max<A[i][j]){
                max = A[i][j];
            }
        }
        if (max==min){
        printf("%d is a saddle point",max);
    }

    }
}
