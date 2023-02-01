#include<stdio.h>   //this is an header file
#include<stdlib.h>	//this is an header file
	typedef struct {

    int n;
	int **m; 
} Matrix;

void initMat(Matrix *M,int N)		//decleration of function
{
	M->n=N;

    M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));
} 

void initMat(Matrix *M)					//decleration of function
{

   for (int i = 0; i < (M->n); i++){
   	for (int j = 0; j < (M->n); j++){
   		scanf("%d",M->n[i][j]);

   	}
   }
}
  void initMat(Matrix *M1,Matrix *M2,Matrix *M3){		//decleration of function

   for (int i = 0; i < M->n; i++){
   	for  (int j = 0; j < M->n; j++){
   		int sum=0;
   		sum=M3->n[i][j];
   		for(int k = 0; k < M->n; k++){
   			sum+=M1->m[i][j]*M2->[k][j];

   			}
   		}
	} return M3;
}
	void initMat(Matrix *M){

	}


	int main(){
	scanf("%d",&N);

	Matrix M1;

	initMat(&M1,N)						//function calling

	getmat(&M1)
	;
		return 0;
	}