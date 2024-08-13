//program to calculate Tp
//code creater: Debojyoti Das
//roll no: 24NA10022

#include<stdio.h>
#include<math.h>
int main()
    {   
       float alpha, rho;
       double Rs,Ts,D,Tp;
       printf("\n Enter value of alpha, rho,Rs,Ts,D :");
       scanf("%f%f%le%le%le",&alpha,&rho,&Rs,&Ts,&D);
       Tp=Ts*(sqrt(Rs*sqrt((1-alpha)/rho)/2*D));
       printf(" value of Tp is=%lf",Tp);
       
       //following program is for predefined values of the variables
       
       float alpha_p=0.306,rho_p=1.2;
       double Tp_p,Rs_p=6.9e8,Ts_p=1.3654e-11,D_p=1.49e11;
       Tp_p=Ts_p*(sqrt(Rs_p*sqrt((1-alpha_p)/rho_p)/2*D_p));
       printf(" value of Tp_p is=%lf",Tp_p);
       
     }  
       
       
