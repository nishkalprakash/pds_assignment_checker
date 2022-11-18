/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#include<limits.h>

int main(){
	int i,j,n;
	//Array size
	printf("Enter n: ");
	scanf("%d",&n);
	int s[n];
	//Array elements
	printf("Enter array s[ ]: ");
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	int cnt,res=INT_MIN;
	//Finding the alpha value
	for(i=0;i<n;i++){
		cnt=0;
		for(j=0;j<i;j++){
			if(s[j]%s[i]==0){
				cnt++;
			}
		}
		if(cnt>res){
			res=cnt;
		}
	}
	printf("Output: %d",res);
}
