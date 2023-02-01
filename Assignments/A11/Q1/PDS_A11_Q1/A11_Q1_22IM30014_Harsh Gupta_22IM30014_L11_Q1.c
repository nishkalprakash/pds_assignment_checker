/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 10
Description - 
*/


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
int i=0,n; float q=0;
void callme(int i,int n){               // function for recursion
	if (i==n){                              // base case 
		q=q+1/(float)n;
	}
	else {
		q=q+1/(float)i;                       // adding 
		callme(i+1,n); 						// calling for each term
	}
}

int main() {
	                      // taking size of list 
	scanf("%d",&n);
	callme(1,n);                            // calling for first time 
	printf("%3f",q);										// printing the value 


    return 0;
    
    
}