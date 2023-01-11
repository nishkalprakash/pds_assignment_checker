/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 8
Description: Print row-major input in column-major way
*/

#include <stdio.h>

int main()
{
	int rowNo;
	printf("Number of elements in one row = ");
	scanf("%d", &rowNo);
	int a[rowNo][rowNo];

	//to enter in row major, first index remains constant while second changes
	for(int i=0; i<rowNo; i++)
		for(int j=0; j<rowNo; j++)
			scanf("%d", &a[i][j]);
	printf("Column Major Order: ");

	//to print in column major order, first index changes while second remains same
	for(int i=0; i<rowNo; i++)
		for(int j=0; j<rowNo; j++)
			printf("%d ", a[j][i]);	

	return 0;
}