/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 8
QUESTION :saddle point of a square matrix 

*/

#include<stdio.h>
#include<limits.h>

//fucntion to check if element is maximum in its column
int ismaxcol(int arr[][100],int r,int c ,int x,int y){
	int max=INT_MIN;
	for(int i=0;i<r;i++){
		if(max<arr[i][y]){
			max=arr[i][y];		
		}	
	}
	if(max==arr[x][y]){			//comparing max with element
		return 1;	
	}
	return 0;	
}

//function to check if element is minimum in its row
int isminrow(int arr[][100],int r,int c ,int x,int y){
	int min=INT_MAX;
	for(int j=0;j<c;j++){
		if(min>arr[x][j]){
			min=arr[x][j];		
		}	
	}
	if(min==arr[x][y]){			//comparing minimum with element
		return 1;	
	}
	return 0;	
}


int main(){

	int row,col;			
	printf("Shape of the 2D array :");
	scanf("%d %d",&row,&col);	
	int arr[100][100];

	//scanning array elements
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);	
		}
	}

	//flag to check if there is any saddle point or not
	int flag=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if( ismaxcol(arr,row,col,i,j) && isminrow(arr,row,col,i,j) ){		//prints the saddle point if both conditions are satisfied
				flag=1;
				printf("the saddle point is : %d\n",arr[i][j]);			//printing the saddle point
			}
			
				
		}
	}
	if(flag==0){
		printf("There is no saddle point in this 2D array\n");
	}
	
	
	return 0;
}
