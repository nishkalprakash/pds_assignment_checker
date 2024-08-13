/*
Program to calculate Tp taking user inputs for alpha sigma Rs Ts and D
Compare the value of Tp to that calculated by predefined values (pre_Tp) for the variables.

Name: S.Akshay
Roll No.: 24NA10062
*/

#include <stdio.h>
#include <math.h>

void main(){
	double alpha,sigma,Rs,Ts,D,Tp;
	scanf("%lf%lf%le%le%le",&alpha, &sigma, &Rs, &Ts,&D);
	Tp = Ts * sqrt((Rs*sqrt((1-alpha)/alpha))/(2*D));
	double pre_alpha = 0.306,
	      pre_sigma = 1.2,
	      pre_Rs = 6.96e8,
	      pre_Ts = 1.3654e-11,
	      pre_D = 1.496e11;
	double pre_Tp = pre_Ts * sqrt((pre_Rs*sqrt((1-pre_alpha)/pre_alpha))/(2*pre_D));
	//The values of Tp and pre_Tp are very small hence they must be printed in exponential notation (or else it round off and prints to zero)
	printf("%le %le\n",Tp, pre_Tp);
}
/*
It is observed that the value of Tp (from user input) and pre_Tp (from predefined values) are the same and equal to 8.081523e-13.
*/
