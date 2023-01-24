/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 9
Description: Program to add two complex no.s ny passing structure to a function.
*/

#include<stdio.h>
struct complex
	{
		float real;
		float imag;
	};// structure defined

struct complex add(struct complex a, struct complex b);

int main()
{
	 
	struct complex a,b;
	scanf("%f",&a.real);
	scanf("%f",&a.imag);
	scanf("%f",&b.real);
	scanf("%f",&b.imag);// variables scanned
	struct complex answer = add(a,b);// function called
	printf("Z = %f + i%f",answer.real, answer.imag);// output printed
	return 0;
}

struct complex add(struct complex a, struct complex b)
{
	struct complex answer;
	answer.real = a.real + b.real;
	answer.imag = a.imag + b.imag;
	return answer;
}// function defined to add the complex no.s