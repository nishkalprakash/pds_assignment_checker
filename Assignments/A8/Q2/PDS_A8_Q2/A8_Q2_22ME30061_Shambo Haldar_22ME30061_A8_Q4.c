/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 8
Description : Program to find the sddle point in a 2-D array 
*/

#include<stdio.h>

int main()
{
	int i,j,row,col,check;

	printf("Shape of the 2D array: ");
	scanf("%d,%d",&row,&col);

	int arr[row][col];

	for(i = 0;i < row;i++){
		for(j = 0;j < col;j++){
			scanf("%d",arr[i][j]);
		}
	}

	for(i = 0;i < row,i++){
		check = "t";
		for(j = 0;j < col;j++){
			if(arr[i][j] < arr[j][i])
				check = "f";
		}
		for(j = 0;j < col;j++){
			if()
		}
	}


}