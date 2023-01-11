/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 8
Description : Program to find saddle point
*/

#include <stdio.h>
#include<stdlib.h>
int main(){
	int r,c,flag=0;
	int a[100][100];
	printf("Shape of 2d array: ");
	scanf("%d, %d", &r, &c);
	//input for 2d array
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d", &a[i][j]);
		}
	}
	//array to store minimum of every row
	int minr[100];
	for(int i=0;i<r;i++) minr[i]=a[i][0];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if (a[i][j]<minr[i]) minr[i]=a[i][j];
		}
	}
	//array to store max of every column
	int* maxc;
	maxc=(int*)(calloc(100,sizeof(int)));
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			if (a[j][i]>maxc[i]) maxc[i]=a[j][i];
		}
	}
	//if element is max in its column and min in its row
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if ((a[i][j]==minr[i])&&(a[i][j]==maxc[j])) {
				printf("The saddle point is %d\n", a[i][j]);
				flag=1;
			}
		}
	}
	//flag condition
	if(flag==0) printf("There is no saddle point in this 2D array");



	return 0;
}