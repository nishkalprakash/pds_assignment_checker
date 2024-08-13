// Program to find Tp using given constants through user input and no user input.
// Creator: Prateek Kesavarapu
// Roll No: 24NA10049

#include <stdio.h>
#include <math.h>

int main(){
	double alpha, rho, Rs, Ts, D;
	printf("alpha: ");
	scanf("%lf", &alpha);
	printf("rho: ");
	scanf("%lf", &rho);
	printf("Rs: ");
	scanf("%le", &Rs);
	printf("Ts: ");
	scanf("%le", &Ts);
	printf("D: ");
	scanf("%le", &D);
	double Tp = Ts * sqrt(Rs * sqrt((1-alpha)/rho)/(2 * D));
	printf("Tp: %le\n", Tp); 
	return 0;
	// Through input 5.742861e-13
	// Through no user input 5.742861e-21	
	// The value of Tp is lower in the case of no user input.
}
