
/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no. 22ME10083
*	Assignment: 9
*	Topic:Structures
*	Question no.:2
*	Programme to additon of two comple no.
*/
#include<stdio.h>
// initializing structures 
typedef struct complex{
	float real;
	float img;
}complex;
// creating a functio for addition
complex add(complex a, complex b){
	complex c;
	c.real= a.real + b.real;
	c.img = a.img + b.img;
	return c; 
}
void main(){
	// varriable initialization
	complex z1,z2,z;
	//taking i/p from user
	printf("Enter real and imaginary part of the 1st complex no:\n");
	scanf("%f%f",&z1.real,&z1.img);
	printf("Enter real and imaginary part of the 2nd complex no:\n");
	scanf("%f%f",&z2.real,&z2.img);
	//logic
	z=add(z1,z2);
	// result
	if(z.img>=0)
	printf("Sum is :\n %f+%fi",z.real,z.img);	
	else
	printf("Sum is :\n %f %fi",z.real,z.img);	

}