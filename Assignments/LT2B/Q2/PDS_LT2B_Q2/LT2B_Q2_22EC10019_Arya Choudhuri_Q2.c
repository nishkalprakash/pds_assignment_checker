/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Test No : 2
	Description : Program to create 2-D array
*/

#include <stdio.h>
#include <stdlib.h>

void disp ( int* r[] , int i , int j , int m ,int n)
{
	if ( i == m-1 && j==n-1)
	{
		scanf("%d" , &r[i][j]);
		printf("%d " ,r[i][j]);
		return;
	}
	if ( j != n-1)
	{
		scanf("%d" , &r[i][j]);
		printf("%d " ,r[i][j]);
		disp( r , i , j+1 , m , n );
	}
	if ( j == n-1)
	{

		scanf("%d" , &r[i][j]);
		printf("%d\n " ,r[i][j]);
		disp( r , i+1 , 0 , m , n );
	}
	
	
}
int main()
{
	int m,n;

	printf("Enter number of rows in matrix :");
	scanf("%d" , &m);

	printf("Enter number of columns in matrix :");
	scanf("%d" , &n);

	int* r[m];

	for (int i = 0 ; i < m ; i++)
	{
		r[i] = (int*)malloc(n*sizeof(int));
	}

	printf("Enter %d elements:" , m*n);

	int i = 0;
	int j = 0;

	disp( r , i , j , m , n );

	return 0;
}
