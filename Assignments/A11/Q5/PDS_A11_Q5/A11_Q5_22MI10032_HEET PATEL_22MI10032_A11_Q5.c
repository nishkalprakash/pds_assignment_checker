/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 11
Description :  to multiply two matrix
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
int n;
int **m;
}Matrix;
void initMat(Matrix *M,int N){
M->n=N;
M->m=(int**)malloc(M->n * sizeof(int*));
for(int i = 0; i< M->n;i++){
M->m[i]=(int*)malloc(M->n * sizeof(int));
}

}
void printMat(Matrix *M,int n){


}
int main(){
Matrix M1;
printf("Enter n");
int N;
scanf("%d",&N);
initMat(&M1,N);
}
