/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 9
	   DESCRIPTION    : A C program that inputs the complex no. and adds them
*/

#include<stdio.h>

struct complex{

	float r;
	float i;
  };
// function to add the complex
void sum(float r1,float i1,float r2,float i2){
	
	printf("the sum of the complex is :%f+%fi",r1+r2,i1+i2);
}





int main(){

	struct complex c1;
	struct complex c2;

	//inuts the values of 1st complex

	printf("enter the real value of complex c1 :");
	scanf("%f",&c1.r);
	printf("enter the imaginary value of complex c1 :");
	scanf("%f",&c1.i);

	//inuts the values of 2nd complex

	printf("enter the real value of complex c2 :");
	scanf("%f",&c2.r);
	printf("enter the imaginary value of complex c2 :");
	scanf("%f",&c2.i);
	
	//sum function call

	sum(c1.r,c1.i,c2.r,c2.i);
	
	
	return 0;
}

	

