/*name-gaurav meena
roll no -22CE10025
lab-11*/

#include<stdio.h>

int fibonaccicheck(int n,int a,int b){
	if(n==a||n==b)
		return 1;

	else if(n<a)
		return 0;

	else
	return fibonaccicheck(n,b,a+b);
}


int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);

	if(fibonaccicheck(n,0,1))
		printf("%d is a fibonacci number\n",n);


	else
		printf("%d is not a fibonacci number",n);
	return 0;
}
