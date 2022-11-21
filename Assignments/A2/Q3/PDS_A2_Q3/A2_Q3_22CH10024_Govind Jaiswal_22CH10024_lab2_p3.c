#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	double x;
	printf("Enter three integers");    //Declaring the variables
	scanf("%d%d%d",&a,&b,&c);
	x = ((-b) + sqrt(pow(b,2) - 4*a*c))/(2*a);
	printf("Roots of the quadratic equation are:") ;   //Printing the result
        printf("x = %lf",x);
	return 0;	     	
}
