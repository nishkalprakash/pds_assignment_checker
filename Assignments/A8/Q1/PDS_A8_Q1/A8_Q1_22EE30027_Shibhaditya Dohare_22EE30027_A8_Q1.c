/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 8
Discription : To print elements of 2d array in column major order 
*/
#include<stdio.h>
int main(){
	int col,i,j;
	printf("Number of elements in one row: ");
	scanf("%d",&col);
	int a[col][col];
	printf("Elements of the 2-D array: ");
	for(i=0;i<col;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
			}
		}
	printf("Column major order: ");
	for(i=0;i<col;i++){
		for(j=0;j<col;j++)
			printf("%d ",a[j][i]);
		}
return 0;
}
