#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,max, saddle,m;

printf("Shape of the 2D array : ");					// Getting input from the user for the shape of the array
scanf("%d %d",&i,&j);
int a[i][j];
printf("Enter the elements of the matrix: ");		// Prompting user to input the elements of the matrix
for(int p = 0 ; p < i; p++){
	for(int q = 0; q<j; q++){
		printf("a[%d][%d] = ",p,q);
		scanf("%d",&a[p][q]);
		
	}	
}
	for (int m = 0; m < i; m++)						// Checking for saddle point
		{
			for (int n = 0; n < i; n++)
			{
				if (a[0][m] >= a[0][n])
				 {
				 	max = a[0][m];
				 } 
			}
		}	

	for (int x = 0; x < j; x++)
		{
			for (int y = 0; y < j; y++)
			{
				if (a[x][m] <= a[y][m])
				 {
				 	saddle = a[x][m];
				 } 
			}
		}


printf("The saddle point is %d", saddle);	
return 0;
}
