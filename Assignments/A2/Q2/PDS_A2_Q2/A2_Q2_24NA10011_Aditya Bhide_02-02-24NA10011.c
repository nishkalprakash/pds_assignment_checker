// Program to evaluate the value of Tp
// Code Creater: Aditya Samir Bhide
// Roll No:24NA10011
#include<stdio.h>
#include<math.h>
void main()
{
	double alpha,sigma,Rs,Ts,D; 
	double alpha_pre=0.306,sigma_pre=1.2,Rs_pre=6.96e10,Ts_pre=1.3654e-11,D_pre=1.496e11; //defining the predefined variables
	double Tp_user,Tp_pre;  //defining the final output variable
	printf("\n Enter the value of alpha: \n");
	scanf("%lf",&alpha);
	printf("\n Enter the value of sigma: \n");
	scanf("%lf",&sigma);
	printf("\n Enter the value of Rs: \n");
	scanf("%le",&Rs);
	printf("\n Enter the value of Ts: \n");
	scanf("%le",&Ts);
	printf("\n Enter the value of D: \n");
	scanf("%le",&D);
	Tp_user=Ts*sqrt((Rs*sqrt((1-alpha)/(sigma)))/(2*D)); // Tp calculated from values enetered by the user
	Tp_pre=Ts*sqrt((Rs_pre*sqrt((1-alpha_pre)/(sigma_pre)))/(2*D_pre)); // Tp calculated from predefined values
	printf("Tp calculated from predefined values = %le \n",Tp_pre); 
	printf("Tp calculated from values enetered by the user = %le \n",Tp_user);
}
// Observation - The value of Tp is coming out to be the same in both the cases 
