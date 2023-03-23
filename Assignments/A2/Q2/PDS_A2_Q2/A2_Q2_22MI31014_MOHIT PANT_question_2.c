// Input from the user...

#include<stdio.h>
#include <math.h>
int main(){
    double alpha,rho,rs,ts,D;
    double x;
    printf("alpha");
    scanf("%lf",&alpha);
    printf("\n rho");
    scanf("%lf",&rho);
    printf("\n Rs");
    scanf("%le",&rs);
    printf("\n Ts");
    scanf("%le",&ts);
    printf("\n D");
    scanf("%le",&D);

    x=ts*sqrt((rs*sqrt((1-alpha)/rho))/(2*D));
    printf("Tp=%le",x);

return 0;
}

// both the cases give the same values , when the input is given by the user or the values are already specified by us
