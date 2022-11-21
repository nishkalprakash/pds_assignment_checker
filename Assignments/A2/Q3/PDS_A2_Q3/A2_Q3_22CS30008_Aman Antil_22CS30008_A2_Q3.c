#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	float a, b, c;// declares float variables a b and c
	float ans;// other variables used for calculation
	float ans2;
	float b2;
	float d;
	printf("Enter a, b and c : ");
	scanf("%f %f %f", &a, &b, &c);// takes input
	b2 = b*b;// assigns values to variables
	d = b2-4*a*c;
	ans = (sqrt(d)-b)/(2*a);
 	ans2 = (0-sqrt(d)-b)/(2*a);
	printf("Roots are : %f and %f", ans, ans2);//prints the answer
	return 0;
}
	
