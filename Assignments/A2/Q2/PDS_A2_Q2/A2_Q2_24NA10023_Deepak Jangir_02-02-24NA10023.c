// program-2
// Deepak Jangir
// 24NA10023

#include<stdio.h>

#include<math.h>

int main()
{	
	double alpha, rho, Rs, Ts, D;
	printf("enter the value of alpha, rho, Rs, Ts, D");
	scanf("%le%le%le%le%le", &alpha, &rho, &Rs, &Ts, &D);
	double Tp;
	Tp =Ts * (sqrt(Rs*(sqrt((1-alpha)/rho))/2*D));
	
	printf("%le\n",Tp);
	return 0; 
}
