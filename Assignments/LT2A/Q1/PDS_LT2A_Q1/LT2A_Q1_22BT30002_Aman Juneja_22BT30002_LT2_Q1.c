/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
LAB TEST-1
QUESTION : to make a 2d array by dynamic memory allocation and print its element in reverse order

*/

#include<stdio.h>	//including stdio.h header files
#include<stdlib.h>	//including stdlib.h header files


//creating struct for 2darray
typedef struct array2d{
	int rows;
	int col;
	int **ptr;
}matrix;

// function to initialise a 2d array
void matrixinitialize(matrix *M,int R,int C){
	M->rows=R;			//assigning rows and colums
	M->col=C;
	M->ptr=(int **)malloc(M->rows * sizeof(int *));
	for(int i=0;i< M->rows;i++){
		M->ptr[i]=(int *)malloc( M->col * sizeof(int));
	}
}

//function to take array input
void inputarray(matrix *M,int R,int C){
	for(int i=0;i<M->rows;i++){
		for(int j=0;j<M->col;j++){
			scanf("%d",&(M->ptr[i][j]));
		}
	}
}

//function to print recursively in reverse
void recurprint(matrix *M,int R,int C){
	if(R==0 && C==0){
		printf("%d ",M->ptr[0][0]);
		return;
	}
	if(C==0){
		printf("%d",M->ptr[R][C]);
		recurprint(M,R-1,C);
	}
	printf("%d",M->ptr[R][C-1]);
}

//function to print matrix
void print(matrix *M,int R,int C){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			printf("%d ",M->ptr[R-i-1][C-j-1]);
		}
		printf("\n");
	}
}

//main function
int main(){
	int m,n;
	printf("Enter M: ");
	scanf("%d",&m);
	printf("Enter N: ");
	scanf("%d",&n);
	matrix matrix1;	//matrix1 object of struct matrix
	matrixinitialize(&matrix1,m,n);
	printf("Enter %d elements: ",m*n);
	inputarray(&matrix1,m,n);
	print(&matrix1,m,n);
	return 0;
}