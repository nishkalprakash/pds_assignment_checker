#include<stdio.h>
#include<math.h>
int main()
{
	double a= 0.306, b= 1.2, Rs= 6.96e8, Ts= 1.3654e-11, D= 1.496e11, Tp;
	Tp = Ts*sqrt(Rs*sqrt(1-a)/b)/2*D;
	printf("Tp= %lf\n",Tp);
	return 0;
}

