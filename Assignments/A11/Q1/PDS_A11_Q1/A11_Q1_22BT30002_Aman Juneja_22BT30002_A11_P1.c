/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 11
QUESTION : to find series sum of harmonic series

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//recursive function to find series sum
double series(int n){
	//base case
	if(n==0){
		return 0;
	}
	return series(n-1)+(1.0/n);			//recurrence relation
}

//driver code
int main(){
	int n;						//creating variable n 
	scanf("%d",&n);				//scanning from user
	double sum=series(n);		//calling series function with parameter given by user
	printf("%.4lf",sum);	

	return 0;
}