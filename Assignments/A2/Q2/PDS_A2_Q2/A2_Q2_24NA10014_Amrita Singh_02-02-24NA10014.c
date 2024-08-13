// reading the given values from the user

// roll no. 24NA10014
// BY:- AMRITA SINGH
#include<stdio.h>
#include<math.h>
int main()
{
	float alpha,rho;
	double Rs,Ts,D,Tp;
	printf("enter the value of alpha \n");
	printf("enter the value of rho \n");
	printf("enter the value of Rs \n");
	printf("enter the value of Ts \n");
	printf("enter the value of D \n");
	scanf("%f %f %lf %lf %lf",&alpha,&rho,&Rs,&Ts,&D);
	
// calculate the value of Tp

	Tp=Ts*sqrt(Rs*(sqrt(1-alpha)/rho)/2);
	
//printing the value of Tp
	printf("the value of Tp=%le",Tp);
	return 0;
	
}
