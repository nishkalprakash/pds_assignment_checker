#include<stdio.h>

typedef struct complex
{
	float real;
	float imaginary;
}complex;                        //defining structre data type as complex

complex add(complex,complex);    //function to add the two complex numbers

int main()
{
	complex z1,z2;
	printf("z1:");
	scanf("%f%f",&z1.real,&z1.imaginary);       //inputting the first complex number
	printf("z2:");
	scanf("%f%f",&z2.real,&z2.imaginary);       //inputting the second complex number
	add(z1,z2);

}
complex add(complex z1,complex z2)
{
	float real = z1.real+z2.real;
	float imaginary=z1.imaginary+z2.imaginary;
	printf("%0.2f+%0.2fi",real,imaginary);       //adding the given complex numbers

}