/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 11
	   DESCRIPTION    : A C program to find sum of HP 
*/


#include<stdio.h>

// A function to find the sum of HP
float sum(int n){
	
	if(n==0||n==1){
		return n;
	}
	float sn =(1.0/n)+sum(n-1);
	return sn;	
}

int main(){
	
	int n;
	printf("enter the number of terms :");
	scanf("%d",&n);
	printf("%0.3f",sum(n));
	

	return 0;
}
