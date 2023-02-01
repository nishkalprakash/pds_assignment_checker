/* 
section 14
roll.no. = 22EC30047
Name = SARTHAK ARORA
Assignment .no  : 11
description: 
*/ 




# include <stdio.h>
# include <stdlib.h>



// a recurive function that can give values of febonacci job 
int febonacci( int n ){
	if(n==0||n==1) 
		return n;
	else 
		return febonacci(n-1)+ febonacci(n-2) ;
}

//this function checks that the number a is a part off febonacci series or not 
int checkiffebonacci( int a ){
	int n = 0; 
	while(febonacci(n) <= a) {
		if(febonacci(n)==a) return 1;
		n++;	
	}
	return 0; 
}



int main(){

	int N;
	printf("N=")
	scanf("%d", &N);

	
	if(checkiffebonacci(N) == 1) printf("Yes!\n");
	else printf("No!\n");

	return 0;
}