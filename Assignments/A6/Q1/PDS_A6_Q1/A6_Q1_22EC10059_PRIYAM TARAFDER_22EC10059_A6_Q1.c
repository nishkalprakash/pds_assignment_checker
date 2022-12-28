/* 	NAME: PRIYAM TARAFDER
	SECTION:14
	QUESTION NO.: 1
	to display consecutive terms of a series using recursion*/
#include <stdio.h>

int print_term(int n){
	if(n==1){
		return 0;
	}else if(n==2){
		return 1;
	}else if(n==3){
		return 2;
	}else{				
		return 			3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;
	}	
}
int main(){
	int k;
	printf("k=");
	scanf("%d",&k);
	if(k<1)
		printf("Invalid input");
	else{
		printf("0");
		for(int t=2;t<=k;t++)
			printf(", %d",print_term(t)); 
	}
}
