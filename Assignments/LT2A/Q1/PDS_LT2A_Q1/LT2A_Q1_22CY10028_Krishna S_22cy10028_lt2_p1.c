#include <stdio.h>
#include <stdlib.h>

int getValue1(int x){      // defining a function to Get input from the user for the number of elements 
	printf("Enter M:");
	scanf("%d",&x);
	return x;

}
int getValue2(int x){      // defining a function to Get input from the user for the number of elements 
	printf("Enter N:");
	scanf("%d",&x);
	return x;
}
typedef struct {
	int x;					// Defining 2D array usimg malloc 
	int y;
	int **m; 
} Mat; 
void initMat(Mat *M,int O,int N)
 {   
 	M->x=O; 
 	M->y = N;
 	M->m = (int**)malloc(M->x * sizeof(int*));    
 	for (int i = 0; i < M->y; i++)  
 			M->m[i] = (int*)malloc(M->y * sizeof(int));
 			     
 		
 }

 void arrayElements(Mat *M,int O,int N){    // defining a function to get input from the user for array elements
		printf("Enter %d Elements:",O*N);
	for (int i = 0; i < O; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d",&M->m[i][j]);
		}
	}
}

void printMat(Mat *M,int m, int n ){   // defining a function to print the elements in the array in reverse order 
	
	for (int i= m; i >= 0; --i)
	{
		for ( int j = n; j >= 0; --j)
		{
			printf("%d ",M->m[j][i]);
			
		}
		printf("\n");
	}
}
int main()
{
	Mat M1;
	int m,n;
	m= getValue1(m);
	n= getValue2(n);
	initMat(&M1,m,n);
	arrayElements(&M1,m,n);
	printMat(&M1,m,n);
	return 0;
}