/*
section 14
roll no:22MI10013
name:animesh mishra
assignment no:11
desccription:input number in sorted linked list
*/
#include<stdio.h>
void main()
{
typedef struct {

    int n;

    int **m;    \\ Here we will define the 2D array using malloc in main fn

} Matrix;









void initMat(Matrix *M,int N)

{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));

}



int main()

{

Matrix M1;

    \\ Ask user N

initMat(&M1,N)

    \\ rest of the program

}
