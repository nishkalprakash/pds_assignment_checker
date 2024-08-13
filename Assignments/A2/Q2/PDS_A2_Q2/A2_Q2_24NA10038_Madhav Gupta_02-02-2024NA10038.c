//This program is used to find the value of tp
//Code creator:Madhav Gupta
//Roll no. : 24NA10038
#include<stdio.h>
#include<math.h>
int main()
{
double a, r, R, T, D, Tp;
printf("What is %lf/n", a);
scanf("%lf", &a);
printf("What is %lf/n", r);
scanf("%lf", &r);
printf("What is %le/n", R);
scanf("%le", &R);
printf("What is %le/n", T);
scanf("%le", &T);
printf("What is %le/n", D);
scanf("%le", &D);//gives all user input
Tp = T*(sqrt(R/(D*2))*(sqrt((1-a)/r)));
scanf("%lf", &Tp);
printf("this id %lf", Tp);
}
