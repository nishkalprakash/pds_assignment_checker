//program to read value from user and calculate Tp
//Akash Kundu
//24NA10012

#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{	
	float alpha,rho;
	double rs,ts,d,tp;
	/*using predefined values
	alpha=0.306;
	rho=1.2;
	rs=6.96e8;
	ts=1.3654e-11;
	d=1.496e11;*/	
	
	//taking input from user
	
	printf("input alpha :");
	scanf("%f",&alpha);
	printf("input rho :");
	scanf("%f",&rho);
	printf("input Rs :");
	scanf("%le",&rs);
	printf("input Ts :");
	scanf("%le",&ts);
	printf("input D :");
	scanf("%le",&d);
	
	tp=ts*sqrt((rs*sqrt((1-alpha)/rho)/(2*d)));//tp=5.742861e-13
	
	printf("Tp = %le",tp);	
	return 0;
	//using predefined values and user values give same result
}
