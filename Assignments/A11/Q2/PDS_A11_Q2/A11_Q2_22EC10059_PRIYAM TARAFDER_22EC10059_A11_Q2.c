/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
SECTION: 14
ASSIGNMENT NO.: 11
QUESTION NO.: 2
DESCRIPTION: check if number is fibonacci recursively
*/

#include <stdio.h>
#include <stdlib.h>
int fibo(int a,int b,int n){
	if(a>n && b>n)
		return 0;
	else if(a==n||b==n)
		return 1;
	return fibo(b,a+b,n);
}
int main(){
	int n;
	scanf("%d", &n);
	if(fibo(0,1,n))
		printf("Yes");
	else
		printf("No");
}