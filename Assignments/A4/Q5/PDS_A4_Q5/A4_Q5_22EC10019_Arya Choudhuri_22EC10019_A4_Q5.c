/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to find approx. root of cubic polynomial
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	printf("The polynomial is ax^3 + bx^2 + cx + d\n");
	int a,b,c,d;

	printf("Enter non-zero value of a [-5,5]: \n");
	scanf("%d",&a);

	printf("Enter value of b [-5,5]: \n");
	scanf("%d",&b);
	
	printf("Enter value of c [-5,5]: \n");
	scanf("%d",&c);
	
	printf("Enter value of d [-5,5]: \n");
	scanf("%d",&d);
	
	double A,B,P_A,P_B;
	
	A = -99.00;   //These values are sufficient to ensure that p(a) and p(b) are of diff. sign.
	B = +99.00;
	
	while (1)
	{
	P_A = (double)a*pow(A,3) + (double)b*pow(A,2) + (double)c*pow(A,1) + (double)d;
	P_B = (double)a*pow(B,3) + (double)b*pow(B,2) + (double)c*pow(B,1) + (double)d;
	
	double C = (double)(A*P_B - B*P_A)/(P_B - P_A);
	double P_C = (double)a*pow(C,3) + (double)b*pow(C,2) + (double)c*pow(C,1) + (double)d;
	

	if ((P_C<0.001)&&(P_C>-0.001))
	{	
		printf("Root of polynomial: %lf", C);
		break;
	}
	if (P_A*P_C>0)
		A = C;
	else
		B = C;
	}
	
	return 0;
}


	
	
	

