// A3_Q3_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to calcuate either of [+ - * /] for 2 numbers

#include <stdio.h>
int main()
{
	char OP;									// Operator (User Defined)
	float N1, N2;								// Operands (User Defined)
	printf("Enter OP N1 N2 : ");
	scanf("%c %f %f", &OP, &N1, &N2);			//Inputs the operation and the two operands
	switch(OP){									// Performs the operation
		case '+': printf("%f\n",N1+N2); break;
		case '-': printf("%f\n",N1-N2); break;
		case '*': printf("%f\n",N1*N2); break;
		case '/': printf("%f\n",N1/N2); 
	}
	return 0;
}
