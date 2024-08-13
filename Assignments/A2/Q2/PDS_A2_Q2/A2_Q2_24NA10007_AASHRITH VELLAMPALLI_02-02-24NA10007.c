#include<stdio.h>
#include<math.h>
int main() 
{
double alpha,rho,Rs,Ts,D,Tp;
printf("enter value of alpha,rho,Rs,Ts,D\n");
scanf("%le%le%le%le%le", &alpha,&rho,&Rs,&Ts,&D);//getting values from user
Tp =Ts*(sqrt(Rs*(sqrt(1-alpha)/rho)/(2*D)));
printf("Tp=%le", Tp);
return(0);
}
//got the value of Tp as Tp=5.486975e-13
