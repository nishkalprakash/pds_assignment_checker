/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#include<stdlib.h>

int myHCT(int k,int i,int n,int m){
	//If no item remains then we have 1 successful trip....
	if(k==0){
		return 1;
	}
	//Number of items cannot be negative...
	if(k<0){
		return 0;
	}
	//Max number of days reached..
	if(i>n){
		return 0;
	}
	int p,res=0;
	//Call function myHCT trying all possible combinations items
	for(p=1;p<=m;p++){
		res+=myHCT(k-p,i+1,n,m);
	}
	return res;
}

int main(){
	int n,k,m;
	printf("Enter value of n : ");  //No. of days
	scanf("%d",&n);
	printf("Enter value of k : ");  //No. of items in the room
	scanf("%d",&k);
	printf("Enter value of m : ");  //Max no. of items per trip
	scanf("%d",&m);

	//myHCT returns total number of possible trips
	int res=myHCT(k,1,n,m);
	printf("%d\n",res);
}
