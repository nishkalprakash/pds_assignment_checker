#include<stdio.h>
#include<math.h>
int main()
{
double alpha ,rho ,Rs ,Ts ,D,Tp ;

printf("Enter the value of alpha,rho,Rs,Ts,D\n");
scanf("%lf%lf%le%le%le",&alpha,&rho,&Rs,&Ts,&D );
Tp=Ts*sqrt(Rs*(sqrt(1-alpha)/rho )/2*D);
printf("Tp=%le",Tp);
return 0;
}

