#include <stdio.h>
#include <math.h>

//DIGIT COUNTING 
int digits(int n){
	int m;
	m=0;
	if (n!=0){
		m++;
		m=m+digits(n/10);//RECURSIVE CALL
		}
	return m;}

//CHECK OF REVERSE NUMBER
int IsPallindrome(int i){
 	int x;
 	x=i%(int)(pow(10,digits(i-1)))+ IsPallindrome(i/10);//RECURSIVE CALL
 	return x;
 	}
// MAIN FUNCTION 
int main(){
	int m;
	scanf("%d",&m);
	if (m==IsPallindrome(m) printf("Pallindrome");
	else printf("NOT A PALLINDROME");
	
		}
