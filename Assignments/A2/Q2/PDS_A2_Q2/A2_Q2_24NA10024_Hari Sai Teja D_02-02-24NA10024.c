//Program to compute the value of Tp

//D Hari Sai Teja

//24NA10024

#include <stdio.h>

#include <math.h>

int main()
{
     double alpha, rho, Rs, Ts, D, Tp;
     
     scanf("%le %le %le %le %le", &alpha, &rho, &Rs, &Ts, &D);
     
     Tp = Ts*(sqrt(Rs*(sqrt((1-alpha)/alpha))/2*D));
     
     printf("Tp = %le\n", Tp);

    double pre_alpha, pre_rho, pre_Rs, pre_Ts, pre_D, pre_Tp;

     pre_alpha == 0.306;
     
     pre_rho == 1.2;
     
     pre_Rs == 6.96e8;
     
     pre_Ts == 1.3654e-11;
     
     pre_D == 1.496e11;
     
     pre_Tp = pre_Ts*(sqrt(pre_Rs*(sqrt((1-pre_alpha)/pre_alpha))/2*pre_D));

     printf("Tp = %le", pre_Tp);
}
