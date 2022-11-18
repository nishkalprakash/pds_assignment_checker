/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<stdlib.h>

void find(int **arr,int r,int c){
	int i,j;
	int mx_ele,mx_pos,mn_ele,mn_pos;
	int MIN,MAX;
	for(i=0;i<r;i++){
		mx_ele=MIN,mx_pos=-1;
		mn_ele=MAX,mn_pos=-1;
		for(j=0;j<c;j++){
			if(arr[i][j]>mx_ele){
				mx_ele=arr[i][j];
				mx_pos=j;
			}
			if(arr[i][j]<mn_ele){
				mn_ele=arr[i][j];
				mn_pos=j;
			}
		}
		int flag=1;
		for(j=0;j<r;j++){
			if(j==i){
				continue;
			}
			if(arr[j][mx_pos]>=mx_ele){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("%d\n",mx_ele);
		}
		flag=1;
		for(j=0;j<r;j++){
			if(j==i){
				continue;
			}
			if(arr[j][mn_pos]<=mn_ele){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("%d\n",mx_ele);
		}
	}
}

int main(){
	int j,i,r,c;
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&r,&c);
	int *arr[r];
	for(i=0;i<c;i++){
		arr[i]=(int*)malloc(sizeof(int)*c);
	}
	printf("Enter matrix elements: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	find(arr,r,c);
}
