//program to calculate Tp
//Name: Rushil Sinha
//Roll no. : 24NA10061
#include <stdio.h>
#include <math.h>

int main(){
	double alpha, rho, Rs, Ts, D, Tp,alpha1, rho1, Rs1, Ts1, D1, Tp1;	//declaration of variables
	alpha = 0.306;
	rho = 1.2;
	Rs = 6.96e8;
	Ts = 1.3654e-11;
	D = 1.496e11;
	printf("Enter the following values:%lf %lf %le %le %le %le",alpha,rho,Rs,Ts,D,Tp);
	scanf("%lf %lf %le %le %le",&alpha1,&rho1,&Rs1,&Ts1, &D1);
	Tp = Ts * (sqrt(Rs*sqrt((1-alpha)/rho)/2*D));
	Tp1 = Ts1 * (sqrt(Rs1*sqrt((1-alpha1)/rho1)/2*D1));
	printf("Tp = %lf\n", Tp);
	printf("Tp1 = %lf\n", Tp1);
	return 0;
	
			//when provided the same input, output doesn't vary
}	
