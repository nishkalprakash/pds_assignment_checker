/*
Name           :Admya Maheshwari
Roll no.       : 22CH10004
Section        : 14
Lab test no.   :1
Discription    :A c program to cheak weather a triangle will be a right angle ,acute,obtuse anled

*/
#include<stdio.h>
#include<math.h>


int main(){
	//here A,B,C are the three sides of the triangle
	float A,B,C;
	
	//input of 1st coordinate
	int a1,a2;
	printf("enter 1st coordinate : ");
	scanf("%d%d",&a1,&a2);
	//input of 2nd coordinate
	int b1,b2;
	printf("enter 2nd coordinate :");
	scanf("%d%d",&b1,&b2);
	//input of 3rd coordinate
	int c1,c2;
	printf("enter 3rd coordinate :");
	scanf("%d%d",&c1,&c2);
	//define the sides A,B,C
	A=pow((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2),0.5);
	B=pow((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2),0.5);
	C=pow((a1-c1)*(a1-c1)+(a2-c2)*(a2-c2),0.5);

	//print the length of the sides
	printf("length of 1st side : %f \n", A);
	printf("length of 2nd side : %f \n", B);
	printf("length of 3rd side : %f \n", C);
	
	//depending on the condition the program will print if the triangle is valid or not
	if((A+B<C)||(B+C<A)||(C+A<B)){
		  printf("invalid"); }
	
	else if((A*A+B*B==C*C)|(B*B+C*C==A*A)||(A*A+C*C==B*B)){
							printf("Right angled"); }
 

	else if((A*A+B*B>C*C)||(B*B+C*C>A*A)||(A*A+C*C>B*B)){
							printf("Obtuse angled"); }

	else if((A*A+B*B<C*C)||(B*B+C*C<A*A)||(A*A+C*C<B*B)){
							printf("Acute angled"); }
				


	return 0;
}

