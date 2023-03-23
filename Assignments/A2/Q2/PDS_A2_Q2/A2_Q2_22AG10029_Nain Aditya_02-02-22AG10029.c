#include<stdio.h>
#include<math.h>
int main(){

    double alpha,rho,Rs,Ts,D,Tp;
    printf (" enter the value of alpha rho Rs Ts and D ");
    scanf("%lf%lf%lf%lf%lf", &alpha, &rho , &Rs , &Ts , &D );
    //alpha = 0.306;
    //rho = 1.2;
    //Rs= 6.96e8;
    //Ts= 1.3654e-11;
    //D = 1.496e11;


    Tp = (Ts*sqrt((Rs*sqrt((1-alpha)/rho)/(2*D))));
    printf ("the value of Tp is %le", Tp );
    //value of Tp is 5.742861e-13

    return 0;

}
