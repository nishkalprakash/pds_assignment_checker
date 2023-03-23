#include <stdio.h>
#include <math.h>
int main(){
    double alpha, rho, Rs, Ts, D, Tp; //declaring the required variables
    printf("alpha=");
    scanf("%lf",&alpha);
    printf("rho=");
    scanf("%lf",&rho);
    printf("Rs=");
    scanf("%lf",&Rs);
    printf("Ts=");
    scanf("%lf",&Ts);
    printf("D=");
    scanf("%lf",&D);
    Tp= Ts*(sqrt((Rs*(sqrt((1-alpha)/rho)))/2.0*D));
    printf("The value of Tp is: %le\n",Tp); // printing the value of Tp
    return 0;

}
