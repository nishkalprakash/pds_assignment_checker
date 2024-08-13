// Program is to put certain numbers and getting the value by under going the followimg formula
//code creator: Aditya Chakraborty
// Roll No: 24NA10010
#include<stdio.h>
#include<math.h>
int main() {
	double alpha,rho,rs,ts,d,tp;
	printf ("Enter your alpha:");
	scanf ("%le",&alpha);
	printf ("Enter your rho:");
	scanf ("%le",&rho);
	printf ("Enter your Rs:");
	scanf ("%le",&rs);
	printf ("Enter your Ts:");
	scanf ("%le",&ts);
	printf ("Enter your D:");
	scanf ("%le",&d);
	tp = ts * sqrt((rs*sqrt((1-alpha)/rho))/2.0*d);
	printf ("the required answer:%le \n",tp);
	
	double alpha1,rho1,rs1,ts1,d1,tp1;
	alpha1 = 0.306;
	rho1 = 1.2;
	rs1 = 6.96e8;
	ts1 = 1.3654e-11;
	d1 = 1.496e11;
	tp1 = ts1 * sqrt((rs1*sqrt((1-alpha1)/rho1))/2.0*d1);
	printf ("the value of the predefined values is :%le",tp1);
	return 0;
}
// from this program i learned how to input numbers and execute the following fomula
