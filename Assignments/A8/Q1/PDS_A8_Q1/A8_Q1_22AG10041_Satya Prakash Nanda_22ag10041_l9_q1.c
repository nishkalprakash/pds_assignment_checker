/*
SATYA PRAKASH NANDA
22AG10041
LAB 9
SECTION 14
QUESTION 1
*/
#include<stdio.h>
int main(){
int n;
printf("enter the elements in one row:");//n=no. of columns
scanf("%d", &n);
int arr[n][n];
printf("enter elements of matrix:");
for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		scanf("%d",&arr[i][j]); // code to enter elements of matrix
	}
}
printf("column major order:");
for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
		printf(" %d ",arr[j][i]);//code to print matrix elements after
	}					//taking transpose
}
printf(" \n");

return 0;
}
