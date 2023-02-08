/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Lab Test:2
Description: Dynamically creation of a 2 D array. Printing the values using recursion in the reverse order.
*/
#include<stdio.h>
#include<stdlib.h>
void print(int m,int n,int *a[m][n]){											//Function to print an array
	printf("%ls ",a[m][n]);
	if(m==0&&n==0){
		return;
	}
	if(m==0){
		printf("/n");
		print(m-1,n,a);
	}
	print(m,n-1,a);
}
void create(){																//Creating a 2D array. Using dynamic memory alocation.
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int**a;
	a=(int**)malloc(m*sizeof(int*));
	for(int i=0;i<m;i++){
		a[i]=(int*)malloc(n*sizeof(int));
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	print(m,n,a);
}
int main(){
	create();
	return 0;
}