#include<stdio.h>     //this is an header file 
#include<stdlib.h>     // this is an header file
float sum(int n);      // declreration of function
float sum(int n){		// function defination
	if(n==1){
		return 1.0;
	}
	else {
		return sum(n-1)+1.0/n;		//using recurssions
	}

}								

int main(){
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("%f",sum(n));			// function calling
	return 0;
}