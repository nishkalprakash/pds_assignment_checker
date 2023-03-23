# include<stdio.h>
# include<math.h>
int main()
{
double alpha,rho,Rs,Ts,D,Tp;
printf( "enter the input values :");
scanf("%lf %lf %lf %lf %lf",&alpha,&rho,&Rs,&Ts,&D);

Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2.0*D);
printf("The value of Tp from the given input data is:%lf\n",Tp);

alpha=306e-3;
rho = 1.2 ;
Rs = 6.96e8;
Ts = 1.3654e-11;
D = 1.46e11;

return 0;
}
