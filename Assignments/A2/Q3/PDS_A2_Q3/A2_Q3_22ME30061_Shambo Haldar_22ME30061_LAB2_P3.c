/* This program finds the roots of a quadratic equation: ax^2 + bx + c = 0 */
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;	// Variables to store the value of coefficients 
	float root1,root2; 	//  Variables to store the value of roots
	scanf("%d%d%d",&a,&b,&c);	// Read the coefficients
	root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
	root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
	printf("Root1 = %f\n",root1);	// Print one root
	printf("Root2 = %f\n",root2);	// Print the other root
	return 0;
}

