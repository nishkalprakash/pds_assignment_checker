#include <stdio.h>
double factorial(int x);
double power(int x, int n);
int main(){
	int n,x;
	double sum=0;
	
	printf("\n Enter values of x and n seperated by one space: ");
	scanf("%d %d", &x, &n );
	
	for (int i=0; i<n;i++) sum+= power(x,i)/factorial(i); //summation of required terms
	printf("The result is: %lf\n", sum);

	return 0;
}


double factorial(int x){		//simple iterating loop to compute factorial
	double a=1;
	for (int i=1; i<=x;i++) a*=i;
	return a;
}

double power(int x, int n){		//simply multiplying x, n times
	double a=1;
	for (int i=1; i<=n;i++) a*=x;
	return a;
	}
