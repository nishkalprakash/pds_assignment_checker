#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,num;	//declaration of variables
	float root1,root2, squareroot ; //declaration of variables
	printf("Enter the value of a,b and c for the following equation (ax^2+bx+c=0): ");  
	scanf("%d %d %d",&a, &b, &c);	//Takes the input
	num = pow(b,2) - 4*a*c;	
	squareroot = sqrt(num);
	root1 = (-b+ squareroot)/(2*a);	//formula for clacuLating root1
	root2 = (-b- squareroot)/(2*a);	//formula for clacuLating root1
	printf("The roots of the following equation are: %f %f", root1, root2);     //prints the roots of the equation
	return 0;
}

	
	
