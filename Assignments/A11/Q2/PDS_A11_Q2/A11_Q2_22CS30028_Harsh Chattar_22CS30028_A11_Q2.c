/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 11
Description :  check whether a given number belongs to the fibonacci sequence or not
*/


#include <stdio.h>
#include <stdlib.h>

int fibo(int n){   //calucalutes the nth fibonacci term
	if(n<=0) return 0;
	if(n==1) return 1;

	return fibo(n-1) + fibo(n-2);
}

int main(){
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int check = 0;
	for(int i=0;i<=11;i++){   //12th term of fibonacci is 144 so we dont need the loop to run beyond i = 11 
		if(fibo(i) == n) {
			printf("YES");
			check = 1;
			break;
		}
	}
	if(check !=1 ) printf("NO");


return 0;
}
