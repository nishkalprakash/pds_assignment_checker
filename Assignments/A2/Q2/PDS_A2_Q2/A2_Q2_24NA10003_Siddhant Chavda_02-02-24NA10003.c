/*  > Program to Calculate the value of Ts by using the values of variables defined by the user
    
    > Code creator: Siddhant Chavda
    > Roll no. : 24NA10003

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float alpha,rho,D;
	double Rs,Ts,Tp;
	
	printf("Enter the value of Alpha:");
	scanf("%f",&alpha);
	printf("Enter the value of Rs:");
	scanf("%le",&Rs);
	printf("Enter the value of rho:");
	scanf("%f",&rho);
	printf("Enter the value of Ts:");
	scanf("%le",&Ts);
	printf("Enter the value of D:");
	scanf("%f",&D);
	Tp = Ts*(sqrt(Rs*sqrt((1-alpha)/rho))/2*D);
	printf("\nThe Value of Tp is: %lf \n",Tp);
	
}
