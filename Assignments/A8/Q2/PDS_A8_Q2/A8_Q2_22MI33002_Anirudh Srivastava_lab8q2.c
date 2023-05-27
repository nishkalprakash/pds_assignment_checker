#include<stdio.h>
#include<stdlib.h>


typedef matrix {
int **ptr;
int m;
int n;
}mat;
int main(){
    mat A,B,C;
    printf("Enter the number of rows : ")
    scanf("%d",&A.m);
    printf("Enter the number of columns : ")
    scanf("%d",&A.n);
    printf("Enter the number of rows : ")
    scanf("%d",&B.m);
    printf("Enter the number of columns : ")
    scanf("%d",&B.n);
    int **defineMatrix(int m, int n){
int **matrix;
matrix = (int **)calloc(m, sizeof(int *));
for (int i = 0; i < m; i++)
{
matrix[i] = (int *)calloc(n, sizeof(int));
}
return matrix;
}
}
