/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:4
Description: This program takes the coefficients of a cubic polynomial and return it root.
*/
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
	int coeff_of_x0;                   //All the coefficients of polynomial are to be taken.
	printf("Enter the coefficient of x^0\n");
	scanf("%d",&coeff_of_x0);
	int coeff_of_x1;
	printf("Enter the coefficient of x^1\n");
	scanf("%d",&coeff_of_x1);
	int coeff_of_x2;
	printf("Enter the coefficient of x^2\n");
	scanf("%d",&coeff_of_x2);
	int coeff_of_x3;
	printf("Enter the coefficient of x^3\n");
	scanf("%d",&coeff_of_x3);
	double a,b;
	printf("Enter the parameter a\n"); // Two parameters are to be taken.
	scanf("%lf",&a);
	printf("Enter the parameter b such that a<b\n");
	scanf("%lf",&b);
	int p_a= coeff_of_x3*(a*a*a)+coeff_of_x2*(a*a)+coeff_of_x1*a+coeff_of_x0;
	int p_b= coeff_of_x3*(b*b*b)+coeff_of_x2*(b*b)+coeff_of_x1*b+coeff_of_x0;
	int c= ((a*p_b)-(b*p_a))/(p_b-p_a);
	int p_c= coeff_of_x3*(c*c*c)+coeff_of_x2*(c*c)+coeff_of_x1*c+coeff_of_x0;
	//Correct a and b are to be taken.
	if(((p_a)*(p_b))>0){
		printf("The input should be as such so that p(a) and p(b) are of opposite signs.");
		return 0;
	}
	//Condition for computing the root.
	else{
		while(abs(p_c)>=0.001){
			int c= ((a*p_b)-(b*p_a))/(p_b-p_a);
			int p_c= coeff_of_x3*(c*c*c)+coeff_of_x2*(c*c)+coeff_of_x1*c+coeff_of_x0;
			if(abs(p_c<0.0011)){
				printf("Root of the polynomial %d",c);
			}
			//condition for getting closer and closer to the root.
			else{
				if(((p_a)*(p_c))>0){
					a=c;
				}
				else{
					b=c;
				}
			}
		}
	}

	return 0;
}