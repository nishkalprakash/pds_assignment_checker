#include<stdio.h>
#include<math.h>

int main() {
    float alpha,rho,Rs,Ts,D;
    printf("value of alpha = ");
    scanf("%f",&alpha);


    printf("value of rho =  ");
    scanf("%f",&rho);

    printf("value of Rs =  ");
    scanf("%f",&Rs);

    printf("value of  Ts = ");
    scanf("%f",&Ts);


    printf("value of D = ");

    scanf("%f",&D);
    float Tp=Ts*sqrt(Rs*sqrt((1-alpha)/rho)/2*D);


    printf("value of Tp is %f",Tp);








return 0;
}
