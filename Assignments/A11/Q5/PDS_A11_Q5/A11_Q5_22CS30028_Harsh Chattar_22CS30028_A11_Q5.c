/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 11
Description :  
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int n;

    int **m;  

} Matrix;

void initMat(Matrix *M,int N)

{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));

}

getMat(Matrix *M,int n,int arr[]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		arr[i] = (M->m)[i][j];
	}
	}
}
} 

printMat(Matrix *M,…){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",(M1->m)[i][j]);
		}
		printf("\n");
}

zeroMat(Matrix *M,…){

}



int main(){
	Matrix M1;
	printf("Enter value of n : ");
	int n;
	scanf("%d",&n);

int arr[n];
initMat(&M1,n);
getMat(&M1,n);
printf("Enter %d elements for matrix1",&n);
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
getMat(&M1,n,arr);

   

return 0;
}