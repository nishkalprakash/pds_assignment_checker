#include<stdio.h>
#include<math.h>

int main ()
{
	double alpha=,rho,Rs,Ts,D,Tp,sigma;//these all are var used in formula of Tp
	sigma=1.2;//sigma is a constant value
	printf("\n alpha = ");
	scanf("%le",&alpha);
	printf("\n rho = ");
	scanf("%le",&rho);
	printf("\n Rs = ");
	scanf("%le",&Rs);
	printf("\n Ts = ");
	scanf("%le",&Ts);
	printf("\n D = ");
	scanf("%le",&D);//till here is the code to get input of all variables 
	Tp=Ts*sqrt(Rs*sqrt((1-alpha)/sigma)/2*D);//formula for Tp
	printf("\n Tp = %le",Tp);
	//the value of tp for given values is 8.591320e-02
	//the value of tp without user input is same as 8.591320e-02
	
	
	
	
	return 0;

}
