#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int **m;
}Matrix;

void MatrixOperation(Matrix *M, int r, int c){
	M->m = (int**)malloc(c * sizeof(int*));
	//dynamically allocating each row the memory of sizeof(int) times column length
    for (int i = 0; i < r; i++)  
  		M->m[i] = (int*)malloc(c * sizeof(int));

  	//Taking input row-wise
  	printf("Enter %d elements : ", r*c);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            scanf("%d", &M->m[i][j]);
    }

  	return;
}

void Print_Reverse(Matrix *M, int r, int c){
	//Printing in reverse of the input
  	for(int i=r-1; i>=0; i--){
        for(int j=c-1; j>=0; j--){
            printf("%d ", M->m[i][j]);
        }
        printf("\n");
    }
    return;
}


int main(){
	int m, n;
	printf("Enter M: "); 	
	scanf("%d", &m);		//Entering number of rows
	printf("Enter N: ");
	scanf("%d", &n);		//Entering number of columns

	Matrix M;
	MatrixOperation(&M, m, n);
	Print_Reverse(&M, m, n);

	return 0;
}