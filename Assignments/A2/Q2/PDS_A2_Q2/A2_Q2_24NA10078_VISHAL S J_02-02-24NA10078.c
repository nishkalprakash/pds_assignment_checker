#include<stdio.h>
#include<math.h>
int main()
{
	double alpha_ = 0.306, rho_ = 1.2, Rs_ = 6.96e8, Ts_ = 1.3654e-11, D_ = 1.496e11, Tp_;
	Tp_ = Ts_ * sqrt(Rs_ * sqrt((1 - alpha_)/rho_)/(2 * D_));
	printf("Tp_ = %le\n", Tp_);
	
	double alpha, rho, Rs, Ts, D, Tp;
	printf("alpha =");
	scanf("%lf", &alpha);
	
	printf("rho =");
	scanf("%lf", &rho);
	
	printf("Rs =");
	scanf("%le", &Rs);
	
	printf("Ts =");
	scanf("%le", &Ts);
	
	printf("D =");
	scanf("%le", &D);
	
	Tp = Ts * sqrt(Rs * sqrt((1 - alpha)/rho)/(2 * D));
	
	printf("Tp = %le", Tp);
	return 0;
}
