
#include<stdio.h>
#include<math.h>

int main()
{
	double alpha=0.306,rho=1.2,Rs=6.96e8,Ts=1.3654e-11,D=1.496e11,Tp;
	// calculate when no  user input by predefined value
	Tp=Ts*sqrt(Rs*sqrt((1-alpha)/rho)/(2*D));
	printf("when no user input:Tp=%le",Tp);
	
	//calculate with user input
	printf("\nEnter the value of alpha");
	scanf("%le",&alpha);
	
	printf("Enter the value of rho");
	scanf("%le",&rho);
	
	printf("Enter the value of Rs");
	scanf("%le",&Rs);
	
	printf("Enter the value of Ts");
	scanf("%le",&Ts);
	
	printf("Enter the value of D");
	scanf("%le",&D);
	
	Tp=Ts*sqrt(Rs*sqrt((1-alpha)/rho)/(2*D));
	printf("Tp=%le",Tp);
	
	return 0;
}
