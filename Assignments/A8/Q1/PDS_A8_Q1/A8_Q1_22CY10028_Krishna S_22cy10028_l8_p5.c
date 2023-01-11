#include <stdio.h>
 int main()
{
int r,c;
printf("Number of elements in one row : ");			// Getting input from the user for the number of rows
scanf("%d",&r);
c = r ;
int a[r][c];
printf("Enter the elements of the matrix: ");
for (int i = 0; i < r; i++)
{
	for (int j = 0; j < c; j++)						// Getting the elements of the matrix from the user
	{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	}
}printf("Column Major Order :");
for(int p = 0 ; p < c; p++){
	for(int q = 0; q<r; q++){						// Printing the column Major order
		printf("%d ", a[q][p] );
	}
}

	return 0;
}