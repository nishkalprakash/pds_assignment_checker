//caculates the value of Tp
//creator:md waqib sk
//roll:24NA10039


#include<stdio.h>
#include<math.h>
int main(){
	double alpha0=0.306,rho0=1.2,Rs0=6.96e8,Ts0=1.3654e-11,D0=1.496e11;
	double alpha,rho,Rs,Ts,D;
//get the inputs from user 
	printf("alpha=");
	scanf("%lf",&alpha);
	printf("rho=");
	scanf("%lf",&rho);
	printf("Rs=");
	scanf("%lf",&Rs);
	printf("Ts=");
	scanf("%lf",&Ts);
	printf("D=");
	scanf("%lf",&D);
	//calculates Tp for both cases
	double Tp0=Ts0*(sqrt((Rs0*sqrt((1-alpha0)/rho0))/2*D0));
	double Tp=Ts*(sqrt((Rs*sqrt((1-alpha)/rho))/2*D));
	
	printf(" Tp (predefined)=%le \n",Tp0);
	printf("Tp(by user input)=%le",Tp);

return 0;

}
