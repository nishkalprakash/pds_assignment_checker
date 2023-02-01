/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 11
Discription : To multiply 2 matrix 
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int n;
	int **m;    
}Matrix;
void initMat(Matrix *M,int N){
   	M->n=N;
	for(int j=0;j<M->n; j++){
   	M->m = (int**)malloc(M->n * sizeof(int*));
	for (int i = 0; i < M->n; i++)
        M->m[i] = (int*)malloc(M->n * sizeof(int));}
}
void getMat(Matrix *M,int N){
   	M->n=N;
	for(int j=0;j<M->n; j++){
		for (int i = 0; i < M->n; i++)
       			scanf("%d",&M->m[i]);}	
}
void print(Matrix *M,int N){
   	M->n=N;
	for(int j=0;j<M->n; j++){
		for (int i = 0; i < M->n; i++)
       			printf("%d",M->m[i]);
			printf("\n");}	
}
int main(){
	Matrix M1;
	int N;
	scanf("%d",&N);
	initMat(&M1,N);
	getMat(&M1,N);
	print(&M1,N);
return 0;}
