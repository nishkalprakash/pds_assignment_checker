/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 8
Description : Program to print in column major order
*/

#include <stdio.h>
int main(){
	int a[100][100],n;
	printf("Enter number of columns in one row: ");
	scanf("%d", &n);
	//taking input row wise 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("column major order: ");
	//printing in column major order
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ", a[j][i]);
		}
	}
	return 0;
}