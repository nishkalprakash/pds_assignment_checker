/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 4
Description : Program to find roots of cubic polynomial
*/
#include<stdio.h>
#include<math.h>
int main(){
	double a=-99999, b=99999, pa, pb, pc, c; //declaring a and b such that value of polynomial at a is always -ve and at b is +ve when coefficient of x^3 is +ve and vice versa
	int al,be,g,d;
	printf("Enter coefficient of x^0: ");
	scanf("%d",&d);
	printf("Enter coefficient of x^1: ");
	scanf("%d",&g);
	printf("Enter coefficient of x^2: ");
	scanf("%d",&be);
	printf("Enter coefficient of x^3: ");
	scanf("%d",&al);
	
	pa= al*a*a*a + be*a*a + g*a + d;
	pb= al*b*b*b + be*b*b + g*b + d;
	for(;;){//using infinite loop and break to exit loop
	c=a+(pa*(a-b))/(pb-pa);
	pc= al*c*c*c + be*c*c + g*c + d;
	if(pc<0.001 && pc>(-0.001)){
		printf("Root of the polynomial: %lf", c);
		break;}	
	else {if(al>0){if(pc<0) a=c;//when coeff of x^3 is +ve and when its -ve, the conditions are specified
		else b=c;}
		else{if(pc<0) b=c;
		else a=c;}
	}}
return 0;
}
		
	
