/*
Name = SARTHAK ARORA
roll.no. = 22EC30047
 section 14
*/ 
#include<stdio.h> 
#include<stdlib.h>


// creating a datastructure which will contain no of rows , columns, and a 2D array 
typedef struct
{
    int n;
    int m ;
    int **arr;
} Matrix;


// initialising the matrix
void initMat(Matrix *M)
{
	int row ;
	printf("enter M:");
	scanf("%d",&row);
    M->n = row;
    int col ;
    printf("enter N:");
	scanf("%d",&col);
    M->m = col;


    M->arr= (int **)malloc(M->n * sizeof(int *));
    for (int i = 0; i < M->n; i++)
        M->arr[i] = (int *)malloc(M->m * sizeof(int));


}

/* attempt to write a recursive function 
void getMat(Matrix *arr)
{
    initMat(arr);
    printf("\nEnter %d elements :", arr->n * arr->m);
    for (int i = 0; i < arr->n; i++)
        for (int j = 0; j < arr->m; j++)
            scanf("%d", &arr->arr[i][j]);
    
}
int i = 1 ;
void printMat(Matrix array, int i){
	if(i==array.m*array.n+1){
		return ;

	}
	printMat( array , i+1);
	printf("%d",*(*array.arr + i));
	

}*/



// taking the inputs fromthe user
void getMat(Matrix *arr)
{
    initMat(arr);
    printf("\nEnter %d elements :", arr->n * arr->m);
    for (int i = arr->n-1; i>=0  ; i--)
        for (int j = arr->m -1; j>=0   ; j--)
            scanf("%d", &arr->arr[i][j]);
    
}

//printing the matrix 
void printMat(Matrix *M)
{
    printf("Output:\n");
    for (int i = 0; i < M->n; i++){
        for (int j = 0; j < M->n; j++)
            printf("%d ", M->arr[i][j]);
    
    printf("\n");
}
}





int main(){


	Matrix array; 
	getMat(&array);
	printMat(&array);
	//printMat(array, i) ;









	return 0 ;
}