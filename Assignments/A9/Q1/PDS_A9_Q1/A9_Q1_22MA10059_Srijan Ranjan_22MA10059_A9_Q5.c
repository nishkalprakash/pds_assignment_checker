/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of two complex numbers, and outputs it sum.
*/
#include<stdio.h>
struct complex{												//Structure to store complex numbers.
		float real;
		float img;
};
struct complex add(struct complex a, struct complex b);
int main(){
	struct complex a,b;										//Declaration of variables.
	scanf("%f",&a.real);
	scanf("%f",&a.img);
	scanf("%f",&b.real);
	scanf("%f",&b.img);
	struct complex result = add(a,b);
	printf("Z = %f + %f i",result.real,result.img);
	return 0;
}
struct complex add(struct complex a, struct complex b){        //Function to add up two complex numbers
	struct complex result;
	result.real = a.real + b.real;
	result.img = a.img + b.img;
	return result;
}