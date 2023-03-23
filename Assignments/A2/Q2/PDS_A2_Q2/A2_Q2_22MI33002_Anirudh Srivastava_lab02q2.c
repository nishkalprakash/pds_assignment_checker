#include<stdio.h>
#include<math.h>
int main()
{


double alpha, sigma, Rs, Ts, D, Tp;
printf("enter the value of alpha");
scanf("%lf", &alpha );
printf("enter the value of sigma");
scanf("%lf", &sigma);
printf("enter the value of Rs");
scanf("%le", &Rs);
printf("enter the value of Ts");
scanf("%le", &Ts);
printf("enter the value of D");
scanf("%le", &D);
Tp=Ts*sqrt((Rs/2*D)*sqrt((1-alpha)/sigma));
printf("the value of Tp is %le",Tp);
return 0;
}

