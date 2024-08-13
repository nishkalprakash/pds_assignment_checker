#include <stdio.h>
#include<math.h>

int main(){
float a,b ;// where a,b,c,d,e are alpha , rho ,Rs, Ts,D
double c,d,e,Tp ;
printf("alpha=\n");
scanf("%f", &a);

printf("\nrho=\n");
scanf("%f",&b);

printf("\nRs=\n");
scanf("%le",&c); 

printf("\nTs=\n");
scanf("%le",&d);

printf("\nD=\n");
scanf("%le",&e);

Tp=d*sqrt((c*(sqrt(1-a)/b))/2*e);
printf("Tp=%le",Tp);

float alpha=0.306, rho=1.2 , Rs=6.96e8, Ts=1.3654e-11,D=1.496e11;
Tp=Ts*sqrt((Rs*(sqrt(1-alpha)/rho))/2*D);
printf("\nTp=%le\n",Tp);

return 0;
}//Tp=0.082085 and both input and output value are same
