#include <stdio.h>
#include <math.h>
int main(){
    double alpha=0.306,rho=1.2,Rs=6.96e8,Ts = 1.3654e-11,D=1.496e11,Tp,A,B;
    printf("alpha = ");
    scanf("%lf",&alpha);
    printf("rho = ");
    scanf("%lf",&rho);
    printf("Rs = ");
    scanf("%le",&Rs);
    printf("Ts = ");
    scanf("%le",&Ts);
    printf("D = ");
    scanf("%le",&D);
    A = sqrt((1-alpha)/rho);
    B = (Rs*A)/(2*D);
    Tp = Ts*sqrt(B);
    printf("%le",Tp);
    return 0;
}
//Test Case - 1 Output :: 5.742861e-13
//Test Case - 2 Output :: 5.742861e-13
//The output in both the cases are same.
