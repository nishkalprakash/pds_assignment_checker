#include<stdio.h>

int power(int x, int n){
	int y=x;
	while (n>1){
		y=y*x;
		n=n-1;
		}
		return(y);
}
int factorial(int p){
	int q=1, r=1;
	while(q<=p){
		r=r*q;
		q=q+1;
	}
		return(r);
}

int main(){
	
	printf("Enter the values of x and n to compte sum of the provided series");
	int x, n;
	scanf("%d%d", &x, &n);
	int u=1;
	float t=1, v, w;
	while(u<n){
		v=power(x, u);
		w= factorial(u);
		t=t+(v/w);
		u++;
	}
	printf("The sum is %f", t);



	return 0;
}