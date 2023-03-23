#include<stdio.h>
#include<math.h>
int main(){

double alpha=.306, rho=1.2, Rs=6.96e8, Ts=1.3654e-11, D=1.496e11, Tp;//defining variable

printf("put the value of alpha"); // enter the value of aplha
scanf("%le",&alpha);

printf("put the value of rho");
scanf("%le",&rho);

printf("put the value of Rs");
scanf("%le",&Rs);

printf("put the value of Ts");
scanf("%le",&Ts);

printf("put the value of D");
scanf("%le,&D);

Tp=Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*D)); //formula of Tp

printf("the value of Tp is %le",Tp); //putput value of tp


return 0;
}
