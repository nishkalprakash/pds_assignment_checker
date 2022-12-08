/*
SATYA PRAKASH NANDA
22AG10041
ASIGNMENT 5
SECTION 14
*/

#include<stdio.h>


float power(int x, int n);// declaration of power function
float fact(int n);// declaration of factorial function

int main(){
int x, n;
printf("enter the value of x and n:");
scanf("%d %d", &x, &n);

float sum=0.00;
for(int i=0; i<n; i++){
	sum=sum+ power(x,i)/fact(i);		// function call
	}
printf("%f", sum);


return 0;
}

float power(int a, int b){
float c=1.00;				// function definition for power
	for(int i=1; i<=b;i++){
		c=c*a; 		
		}
return c;
}

float fact(int n){
	float factorial=1.00;		// function definition for fact
	for(int i=1; i<=n; i++){
		factorial=factorial*i;		
		}
	return factorial;
}
