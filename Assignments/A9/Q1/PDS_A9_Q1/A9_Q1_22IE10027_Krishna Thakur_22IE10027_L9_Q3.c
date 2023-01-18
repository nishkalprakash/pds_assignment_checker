#include <stdio.h>

struct complex{
	float real;
	float imag;
};
struct complex add(struct complex a, struct complex b){//creating the function to add two complex numbers 
	struct complex sum;
	sum.real=(a.real +b.real);
	sum.imag=(a.imag +b.imag);
	return sum;

}

int main(){
	struct complex z1, z2;//taking input from the user 
	printf("z1 : ");
	scanf("%f", &z1.real);
	scanf("%f", &z1.imag);
	printf("z2 : ");
	scanf("%f", &z2.real);
	scanf("%f", &z2.imag);
	struct complex s=add(z1, z2);
	printf("Z=%f+%fi", s.real, s.imag);//printing the output




	return 0; 
}