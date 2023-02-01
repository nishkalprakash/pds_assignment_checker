/* 
section 14
roll.no. = 22EC30047
Name = SARTHAK ARORA
Assignment .no  : 11
description: 
*/ 




# include <stdio.h>
# include <stdlib.h>


typedef struct {
	int n;
	int **m;   
} Matrix;


void initMat(Matrix *M,int N){
	M->n=N;
	M->m = (int**)malloc(M->n * sizeof(int*));
	for (int i = 0; i < N; i++)
		M->m[i] = (int*)malloc(M->n * sizeof(int));
}


void getMat (Matrix *M ){
	for(int i= 0 ;i< M->n ;i++){
		for(int j = 0 ; i< M->n; j++){
			scanf("%d",&M->m[i][j]);
		}
	}
}

void printMat (Matrix *M ){
	for(int i= 0 ;i< M->n ;i++){
		for(int j = 0 ; i< M->n; j++){
			printf("%d",M->m[i][j] );
		}
		printf("\n");
	}
}

int main(){

	int N ;
	Matrix M1 ;
	printf("N=");
	scanf("%d",&N);


	initMat(&M1, N); 

	getMat(&M1) ;
	//printMat(&M1) ;
	

	return 0;
}