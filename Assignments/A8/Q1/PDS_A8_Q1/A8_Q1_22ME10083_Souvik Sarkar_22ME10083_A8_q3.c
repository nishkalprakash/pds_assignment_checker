/*
*	section 14
*	Name: Souvik Sarkar
*	rol no.:22ME10083
*	Assignment: 8
*	Topic:2D array & Strings
*	Question no.:3
*	Programme to printf the 2d array in column wise
*/
#include<stdio.h>
void main(){
//Varriable initialization
	int m,arr[10][10];
int i, j;
//TAking inputs
	printf("Enter the total no. of in one row in square 2d array:\n");
	scanf("%d",&m);
//i/p of the user
printf("Now enter the elements:\n");
	for(i=0;i<m;i++){
           //printf("Enter elements in %d -th row: \n",i);
	 	for(j=0;j<m;j++)
		{ 
 			//printf("Enter elements in %d -th column: \n",j);
			scanf("%d",&arr[i][j]);
		}
	}
// i/p matrix
        printf("The result of the matrix\n");
	for(i=0;i<m;i++)
		//printf("*");
	 	for(j=0;j<m;j++)
			printf("  %d  ",arr[i][j]);

// result
	printf("\nThe column major order of the 2d array is here!\n");
	//logic
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",arr[j][i]);
		}
	}
	

}
