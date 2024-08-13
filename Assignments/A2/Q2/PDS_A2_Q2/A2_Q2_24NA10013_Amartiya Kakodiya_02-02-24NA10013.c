//program to read values from user and calculate the value of Tp 
//Amartiya kakodiya
//Roll no:24NA10013
#include<stdio.h>
#include<math.h>
int main(int argc, char*argv[])
{
       
       float alpha,rho;
       double Rs,Ts,D,Tp;
       
       printf("enter the value of alpha:");
       scanf("%f",&alpha);
       printf("enter the value of rho:");
       scanf("%f",&rho);
       printf("enter the value of Rs:");
       scanf("%le",&Rs);
       printf("enter the value of Ts:");
       scanf("%le",&Ts);
       printf("enter the value of D:");
       scanf("%le",&D);
       
       
       Tp=Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
       printf("the value of Tp=%le",Tp);
       
       alpha=0.306;
       rho=1.2;
       Rs=6.96e8;
       Ts=1.3654e-11;
       D=1.496e11;
       Tp=Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
       printf("the value of Tp=%le",Tp);
       return 0;
}
