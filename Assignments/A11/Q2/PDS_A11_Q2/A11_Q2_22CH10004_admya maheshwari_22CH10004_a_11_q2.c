/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 11
	   DESCRIPTION    : A C program to find if a number is in the fibonacci sequence or not  
*/


#include<stdio.h>
//function for fibonacci seq
int fib(n){

	if(n==0||n==1){
		return n;
                         }
	int x=fib(n-1)+fib(n-2);
	return x;
}

int main(){
	int n,m;
	scanf("%d",&n);  //take number of term as input in fib seq
	printf("enter a value you want to check :"); 
	scanf("%d",&m); //input the value we need to cheak 
	for(int i=0;i<=n;i++){
		if(m==fib(i)){
		    printf("yes");
                                  }

		else{
			printf("no");	
	              }
			         }

return 0;
}
