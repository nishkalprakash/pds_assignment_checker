/*
satya prakash nanda
22AG10041
section 14
lab test 2
question 2
*/
#include<stdio.h>
#include<stdlib.h>
void printelements(int arr[][100], int m, int n);			//function to print matrix
void input(int arr[][100], int m, int n);				//function to get input

int main(){
int m, n;
printf("enter m:");		//m==rows
scanf("%d", &m);
printf("enter n:");		//n==columns
scanf("%d", &n);

int arr[m][n];
input(arr,m,n);				//function call
printelements(arr,m,n);			//function call

return 0;
}

void input(int arr[][100], int m, int n){			//function definition
printf("enter %d elements:", m*n);
for(int i=0;i<m;i++){
	for(int j=0; j<n; j++){
		scanf("%d",&arr[i][j]);
	}
}

}
void printelements(int arr[][100], int m,int n){
printf("output:\n");
for(int i=0;i<m;i++){
	for(int j=0; j<n; j++){
		printf(" %d ",arr[i][j]);
	}
printf(" \n");
}


}
