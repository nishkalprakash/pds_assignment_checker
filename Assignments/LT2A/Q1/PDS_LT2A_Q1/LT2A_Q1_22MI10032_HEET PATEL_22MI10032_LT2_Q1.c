/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : LAB TEST 2
Description :  to  print in reverse manner
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int n;
    int **m;
} Matrix;

void initMat(Matrix *M, int n,int m)
{
    M->n = n;
    M->m = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        M->m[i] = (int *)malloc(m * sizeof(int));
}
void printMat(Matrix *M, int n, int m)
{
int a= m-1;
int b= n-1;
    printf("\nThe reverse  Matrix  is: \n");
    for (int i = a; i >= 0; i--){

        for (int j = b; j >= 0; j--){
            printf("%d ", M->m[i][j]);
}


}

}
void recursive(Matrix *M,int b,int m){

int t = b;
if(t==0 && m==0 ){
printf("%d",M->m[0][0]);

}
if(t==0 && m!=0){
int c = b-1;
recursive(M,c,m--);
}

for(int i=m-1;i<0;i--){
for(int j=b-1;j<0;j--){
printf("%d ",M->m[i][j]);
}
}

}
void getMat(Matrix *M, int n, int m)
{
    initMat(M,n,m);
    printf("\nEnter %d elements : ", n*m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < M->n; j++)
            scanf("%d", &M->m[i][j]);
   // recursive(M,n-1,m-1);
}


int main(){
 int n,m;
    
printf("Enter M: ");
    scanf("%d", &m);
printf("Enter N: ");
    scanf("%d", &n);
int c = m*n;

Matrix M;
 getMat(&M,n,m);
printMat(&M,n,m);
 
recursive(&M,n,m);
}
