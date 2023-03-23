#include <stdio.h>
#include <math.h>
int main()
{
    double alpha,rho,Rs,Ts,D,Tp;
    printf("Enter the value of alpha\n");
    scanf("%le",&alpha);
    printf("Enter the value of rho\n");
    scanf("%le",&rho);
    printf("Enter the value of Rs\n");
    scanf("%le",&Rs);
    printf("Enter the value of Ts\n");
    scanf("%le",&Ts);
    printf("Enter the value of D\n");
    scanf("%le",&D);
    Tp=Ts*(sqrt((Rs*sqrt((1-alpha)/rho))/(2*D)));
    printf("Tp=%le",Tp);
    return 0;




}
//the values of Tp in both the cases i.e. predefined and user input are same
//user input Tp=5.742861e-13
//predefined Tp=5.742861e^-13






/*The value of Tp in case of predefined values given is 5.742861e^-13
double alpha=0.306;
    double rho=1.2;
    double Rs=6.96e8;
    double Ts=1.3654e-11;
    double D=1.496e11;
    double Tp=Ts*(sqrt((Rs*sqrt((1-alpha)/rho))/(2*D)));
    printf("The value of Tp is %le",Tp);
    return 0;the code is for predefined part*/


