// PROGRAM TO COMPUTE THE VARIABLES
// CODE CREATOR : HARSHITH ANAND
//ROLL NO: 24NA10030
#include<stdio.h>
#include<math.h>

int main()
{

     double alpha,rho,Rs,Ts,D,Tp;
     scanf("%le %le %le %le %le %le,&alpha,&rho,&Rs,&Ts,&D,&Tp);
     alpha=0.306;
     rho=1.2;
     Rs=6.96*10**8;
     Ts=1.36548*10**-11
     D=1.496*10**11;
     Tp=Ts*(Rs*((1-alpha)/alpha)/2*D)**(1/2);
     scanf("%le",&Tp);
     printf("enter the value of Tp=",Tp);
     return 0;
}     
     
     
  

