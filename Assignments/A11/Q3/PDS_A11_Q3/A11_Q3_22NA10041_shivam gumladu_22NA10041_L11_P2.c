#include<stdio.h>		//this is an header file.
#include<stdlib.h>		//this is an header file.
int fib(int n){			// this is the function decleration.
	if(n==0){
		return 0;
	} else if (n==1){
	return 1;
} else {
	return fib(n-1)+fib(n-2);
}
}
int main(){
	int n;
	printf("enter the value of number: \n") 
	scanf("%d",&n);

	int flag=0;							
	for(int i=0; i<(n+5);i++){
		if n==(fib(i)){				//function calling.
			flag(1);
		}
	}
	if(flag==1){
		printf("correct\n");
} else {
	printf("not correct\n");
}

	
return 0;
}
