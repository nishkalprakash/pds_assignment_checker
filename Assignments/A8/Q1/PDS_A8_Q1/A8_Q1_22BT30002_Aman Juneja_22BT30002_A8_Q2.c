/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 8
QUESTION :TO TAKE ELEMENTS OF ARRAY IN ROW MAJOR ORDER AND PRINT IN COLUMN MAJOR ORDER

*/
#include<stdio.h>
int main(){
	int n;
	printf("enter the number of elements in row : ");
	scanf("%d",&n);						//scanning number of elements in a row of array 
	int arr[n][n];

	//scanning array elements
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	//printing in required format
	printf("printing in column major order : \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[j][i]);
		}
	}
	printf("\n");
	
	return 0;
}
