/*NAME: Shreya Bharti
Roll: 22CH10064
SEC: 14
Test set: B
Question no. 2
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct			//defining structure named matrix
{				
    int p;
    int q;
    int **m;
} Matrix;

void initMat(Matrix *M, int P,int Q)			//function for dynamic memory allocation for 2d array
{
    M->p = P;
    M->q = Q;
    M->m = (int **)malloc((M->p*M->q) * sizeof(int *));
     for (int i = 0; i < M->p; i++)
        for (int j = 0; j < M->q; j++)	
        M->m[i] = (int *)malloc(M->q * sizeof(int));
}


void printMat(Matrix *M)				//declaration and definition of function to print the matrix
{
    for (int i = 0; i < M->p; i++){
        for (int j = 0; j < M->q; j++)
            printf("%d ", M->m[i][j]);
	}
    printf("\n");				// new line for new row
}


void getMat(Matrix *M, int P, int Q)			//FUNCTION TO GET MATRIX ELEMENTS FROM USER
{
    initMat(M, P,Q);
    printf("\nEnter %d elements: ", M->p * M->q);	
    for (int i = 0; i < M->p; i++){
        for (int j = 0; j < M->q; j++){
            scanf("%d", &M->m[i][j]);
	}
    }	
    printMat(M);
}


void input(){						//function to input necessary information about matrix
	int P,Q;						
	Matrix M1;

	printf("Enter M: ");			//reads no of rows
   	scanf("%d", &P);


    	printf("Enter N: ");			//reads no of columns
    	scanf("%d", &Q);
	getMat(&M1, P, Q);			//function call of getmax

}



int main()
{
    input();				//function call 
return 0;
}




