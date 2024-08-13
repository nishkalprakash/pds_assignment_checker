

#include <stdio.h>
#include <math.h>

int main()
{
	double alpha, rho, Rs, Ts, D, Tp;
	
	
	printf("Kindly input the following values as specified.\n");
	printf("alpha: "); scanf("%lf", &alpha);
	printf("\nrho: "); scanf("%lf", &rho); 
	printf("\nRs: "); scanf("%le", &Rs); 
	printf("\nTs: "); scanf("%le", &Ts); 
	printf("\nD: "); scanf("%le", &D); 
	
	Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*D));   //specified formula
	
	printf("Tp=%le\n", Tp);
	
	return 0;
}
