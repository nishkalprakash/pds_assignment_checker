/*
SATYA PRAKASH NANDA
SEC 14
22AG10041
LAB 9
QUESTION 2
*/
#include<stdio.h>
int main(){
int row;
int column;
printf("enter number of rows of matrix:");
scanf("%d", &row);
printf("enter number of columns of matrix:");
scanf("%d", &column);
int arr[row][column];
for(int i=0; i<row; i++){
	for(int j=0;j<column; j++){
			printf("enter A(%d,%d) element of matrix:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
}

printf("entered matrix is:\n");
for(int i=0; i<row; i++){
	for(int j=0;j<column;j++){
			printf("%d ",arr[i][j]);
		}
	printf(" \n");
}
int min[row];
min[0]=arr[0][0];
for(int i=0;i<column; i++){
	if(arr[0][i]<arr[0][0]){
			min[0]=arr[0][i];
		}
}
min[1]=arr[1][0];
for(int i=0;i<column; i++){
	if(arr[1][i]<arr[1][0]){
			min[1]=arr[1][i];
		}
}
min[2]=arr[2][0];
for(int i=0;i<column; i++){
	if(arr[2][i]<arr[2][0]){
			min[2]=arr[2][i];
		}
}
int max[column];
max[0]=arr[0][0];
for(int i=0;i<row; i++){
	if(arr[i][0]>arr[0][0]){
			max[0]=arr[i][0];}
		}

max[1]=arr[0][1];
for(int i=0;i<row; i++){
	if(arr[i][1]>arr[0][1]){
			max[1]=arr[i][1];}
		}
max[2]=arr[0][2];
for(int i=0;i<row; i++){
	if(arr[i][2]>arr[0][2]){
			max[2]=arr[i][2];}
		}
int a;
int count=0;
for(int i=0; i<row;i++){
	for(int j=0; j<column;j++){
		if(min[i]==max[j]){
			a=min[i];
			count++;
		}
	}
}
if(count>0){printf("saddle point is %d\n",a);}
else{printf("no saddle point\n");}
return 0;
}
