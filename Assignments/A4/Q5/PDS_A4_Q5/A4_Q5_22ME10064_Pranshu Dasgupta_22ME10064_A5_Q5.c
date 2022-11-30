#include <stdio.h>

int main(){
	double c1, c2, c3, c4;
	double a=-5, b=5, c, p_a, p_b, p_c, m;
	printf("Enter coefficient of x^0: ");
	scanf("%lf", &c4);
	printf("Enter coefficient of x^1: ");
	scanf("%lf", &c3);
	printf("Enter coefficient of x^2: ");
	scanf("%lf", &c2);
	printf("Enter coefficient of x^3: ");
	scanf("%lf", &c1);
	p_a=(c1*(a*a*a))+(c2*(a*a))+(c3*a)+c4;
	p_b=(c1*(b*b*b))+(c2*(b*b))+(c3*b)+c4;
	while ((p_a*p_b)>0){  //Checking if A and B points are on opposite sides of x-axis and updating values till they are
		a-=0.0001;
		b+=0.0001;
		p_a=(c1*(a*a*a))+(c2*(a*a))+(c3*a)+c4;
		p_b=(c1*(b*b*b))+(c2*(b*b))+(c3*b)+c4;
	}
	m=(p_b-p_a)/(b-a);  //m is the slope of line joining (a,p(a)) and (b,p(b))
	c=(((m*b)-p_b)/m);  //expression for x intercept m*b-p(b)/m derived from y=mx+c
	p_c=(c1*(c*c*c))+(c2*(c*c))+(c3*c)+c4;
	while (!((p_c>-0.001) && (p_c<0.001))){  //shrinking A and B till it converges at the root at x=c
		if ((p_c*p_a)>0){  //shifting A to C
			a=c;
			p_a=(c1*(a*a*a))+(c2*(a*a))+(c3*a)+c4;
		}
		else {
			b=c;  //shifting B to C
			p_b=(c1*(b*b*b))+(c2*(b*b))+(c3*b)+c4;
		m=(p_b-p_a)/(b-a);
		c=(((m*b)-p_b)/m);
		p_c=(c1*(c*c*c))+(c2*(c*c))+(c3*c)+c4;
	}
	printf("Root of the polynomial: %.4lf", c);
	return 0;
}
