/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 8
Question No. : 3
Description : Saddle point
*/

#include<stdio.h>
	int x=0;
	void function(int col,int arr[col],int max){
		int flag=0;
		for(int i=0;i<col;i++){
			if (max<=arr[i])
				flag++;
		}
		if(flag==col)
			printf("The saddle point is %d ",max);
		else x++;
	}

int main(){
	
	int row,column;

	printf("Shape of the 2D array: ");
	scanf("%d %d",&row,&column);

	int arr[row][column];
		
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	int max=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(max>arr[i][j])
				max=arr[i][j];
		}
		function(col,arr[col],max);
	}


	if(x==row)printf("There is no saddle point in this 2D array");
return 0;
}
