/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 9
 Description : Program that adds two complex numbers using structure  
*/


#include <stdio.h>		//including the standard input output library
#include <stdlib.h>		//including the stdlib library

typedef struct complex{          //defining the structure complex
	float real;
	float imag;
}complex;                        //assigning name complex to the structure complex

complex add(complex z1,complex z2)   // defining the add function
{
	complex z3;
	z3.real = z1.real + z2.real;
	z3.imag = z1.imag + z2.imag;
	return z3;						//returning a structure z3
}

int main()
{
	complex z1,z2;					//declaring the variables z1 and z2
	printf("z1: ");					//prompting the user for input
	scanf("%f %f",&z1.real,&z1.imag);	//taking the input

	printf("z2: ");							//prompting the user for input
	scanf("%f %f",&z2.real,&z2.imag);		//taking the input

	complex z3 = add(z1,z2);				//calling the add function

	if (z3.real-(int)z3.real == 0)			//printing the resultant complex number according to the sample output
	{
		if(z3.imag-(int)z3.imag == 0)
			printf("Z = %0.0f + %0.0fi\n",z3.real,z3.imag);
		else
			printf("Z = %0.0f + %0.1fi\n",z3.real,z3.imag);
	}

	else if (z3.imag-(int)z3.imag == 0)
	{
		if(z3.real-(int)z3.real == 0)
			printf("Z = %0.0f + %0.0fi\n",z3.real,z3.imag);
		else
			printf("Z = %0.1f + %0.0fi\n",z3.real,z3.imag);
	}

	else
		printf("Z = %0.1f + %0.1fi\n",z3.real,z3.imag);
	return 0;						//int main function returns 0
}
