#include<stdio.h>  
int main()//starting of program
{
    double Tp, alpha, rho, Rs, Ts, D;
    scanf("%lf",&alpha);//value of alpha
    scanf("%lf",&rho);//value of rho
    scanf("%le",&Rs);//value of Rs
    scanf("%le",&Ts);//value of Ts
    scanf("%le",&D);//value of D
    Tp=Ts*sqrt(Rs*(sqrt((1-alpha)/alpha))/2*D);//as given in question
    printf("value of Tp is %le\n", Tp);// value of Tp
    return 0;//end of program

}
