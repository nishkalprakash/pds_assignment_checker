/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:7
Description: This program takes two strings and prints if the strings are an anagram..
*/
#include<stdio.h>
int main(){
	int n;
	printf("No of elements in a row: ");
	scanf("%d",&n);
	int m;
	printf("No of rows: ");
	scanf("%d",&m);
	int a[m][n];
	int b[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if(m!=n){
		printf("Invalid input. The resulting 2d array is not a square");
		return 0;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
	}
	return 0;
}