#include<stdio.h>
#include<stdlib.h>
int **print(int **A,int m,int n);
void **scan(int **A,int m,int n);
void printmat(int **print);
int main()
{
int n,m;
//input the dimensions of the matrix
printf("enter the size of the row of the matrix: ");
scanf("%d",&m);
printf("enter the sie of the coloumn of the matrix: ");
scanf("%d",&n);
int *A[m];
//dynamically allocating the memory for the 2D array
for(int i=0;i<m;i++)
{
A[i]=(int*)malloc(n*sizeof(int));
}
scan(A,m,n);
print(A,m,n);
printmat;
return 0;
}
//function to scan the elements into the matrix
void **scan(int **A,int m,int n)
{
printf("enter the elements into the matrix: \n");
for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			{
				scanf("%d",&A[i][j]);
			}
	}
};
//function to print  the matric in reverse order
int **print(int **A,int m,int n)
{
for(int i=m-1;i>=0;i--)
	{
		for(int j=n-1;j>=0;j--)
			{
				printf("%d ",A[i][j]);
			}
			printf("\n");	
	}
};
















