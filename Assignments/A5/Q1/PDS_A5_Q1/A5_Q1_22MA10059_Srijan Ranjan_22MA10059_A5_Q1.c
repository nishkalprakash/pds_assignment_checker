/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:5
Description: This program takes number of terms and variable and calculate the sum of the given sequence.
*/
#include<stdio.h>
#include<math.h>
float power(float x,float n);
float fact(float n);
int main(){
	float x,n;
	float ans=1;;
	scanf("%f %f",&x,&n);
	for(int i=1;i<=n;i++){                                   //Program to get the sum of the sequence.
		ans= ans + (power(x,i))/(fact(n));
	}
	printf("%f\n",ans );
	return 0;
}

float power(float x,float n){                              // Function for calculating the power of x.
	float pow=1;
	for(int i=1;i<=n;i++){
		pow=pow*x;
	}
	return pow;
}

float fact(float n){                                      // Function for calculating the factorial of x.
	float fac=1;
	for(int i=1;i<=n;i++){
		fac=fac*i;
	}
	return fac;
}