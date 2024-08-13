#include <stdio.h>
#include <math.h> //Including the math library for squarew root
int main()
{
	double alpha = 0.306, rho = 1.2, Rs = 6.96e8, Ts = 1.3654e-11, D = 1.496e11, Tp;  //Assigning the pre defined values to the variables ie initiating the variables
	Tp = Ts * (sqrt( Rs * (sqrt( (1-alpha)/rho))/(2 * D))); //Formula
	printf("The value of Tp without any user input is: %le", Tp); //Asking for developer defined values
	printf("\n Please input the value of Alpha:");
	scanf("%lf", &alpha);
	printf("\n Please input the value of Rho:");
	scanf("%lf", &rho);
	printf("\n Please input the value of Rs:");
	scanf("%le", &Rs);
	printf("\n Please input the value of Ts:");
	scanf("%le", &Ts);
	printf("\n Please input the value of D:");
	scanf("%le", &D);
	Tp = Ts * (sqrt( Rs * (sqrt( (1-alpha)/rho))/(2 * D)));
	printf("\nThe value of Tp is: %le\n", Tp); //Printing the value of Tp with user defined values
	return 0;
} 
