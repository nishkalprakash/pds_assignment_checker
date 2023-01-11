/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 8
 Description : find the saddle point in a 2d Array
 */

#include<stdio.h>
#include<math.h>

int main(){
	printf("Shape of the 2D array: ");
	int n1,n2;
	scanf("%d",&n1);
	printf(",");
	scanf("%d",&n2);
	int a[n1][n2];
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max[n2];
	for(int i=0;i<n2;i++){
		int maxi=a[0][i];
		for(int j=0;j<n1;j++){
			if(a[j][i]>maxi){
				maxi=a[j][i];
			}
		}
		max[i]=maxi;
	}
	int min[n1];
	for(int i=0;i<n1;i++){
		int mini=a[i][0];
		for(int j=0;j<n2;j++){
			if(a[i][j]<mini){
				mini=a[i][j];
			}
		}
		min[i]=mini;
	}
	int sad=0;
	for(int i=0;i<n1;i++){
		
		for(int j=0;j<n2;j++){
			if(max[i]==min[j]){
					sad=a[j][i];
			}
		}
		
	}
	if(sad!=0){
	printf("The saddle point is %d",sad);
	}
	else{
		printf("There is no saddle point in this 2D array.");
	}
}