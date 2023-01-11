/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:7
Description: This program takes a 2d array and returns the saddle point.
*/
#include<stdio.h>
#include<stdlib.h>
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int n;
	int m;
	printf("Shape of the 2D array: ");
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){											//Taking input of the saddle array.
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int mi[n];
	int min=100000;
	for(int i=0;i<n;i++){											//Getting the minimum of the row.
		for(int j=0;j<m;j++){
			min=min(a[i][j],min);
		}
		mi[i]=min;
	}
	int ma[m];
	int max=0;
	for(int i=0;i<m;i++){										//Getting the maximum of the column.
		for(int j=0;j<n;j++){
			max=max(a[j][i],max);
		}
		ma[i]=max;
	}
	int flag=0;
	for(int i=0;i<n;i++){												//Checking if both max and min are the same.
		if(mi[i]==ma[i]){
			printf("%d",ma[i]);
			flag=1;
		}
	}
	if(flag==0){
		printf("No saddle point exists");
	}
	return 0;
}