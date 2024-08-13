#include <stdio.h>
#include <math.h>
int main()
{	
	//the predefined input are.
	double a1=0.306,b1=1.2,r1=6.96e8,t1=1.3654e-11,d1=1.496e11,tp1;
	//the iniitalising of values for the input.
	double a,b,r,t,d,tp;
	//input of the values
	printf("Enter the value of a : ");
	scanf("%lf",&a);
	printf("Enter the value of b : ");
	scanf("%lf",&b);
	printf("Enter the value of r : ");
	scanf("%le",&r);
	printf("Enter the value of t : ");
	scanf("%le",&t);
	printf("Enter the value of d : ");
	scanf("%le",&d);
	//calculation of the input values
	tp= t*(sqrt(r*(sqrt((1-a)/b)/(2*d))));
	//calculation of the predefined values.
	tp1= t1*(sqrt(r1*(sqrt((1-a1)/b1)/(2*d1))));
	//printing of tehe input values
	printf("The output of Tp is : %le \n",tp);
	//printing of the predefined values
	printf("The output of Tp1 is : %le \n",tp1);
}
	
