#include <stdio.h>
#include <math.h>
int main(){
    //declaration of the variables
    double a;
    double sig;
    double Rs;
    double Ts;
    double D;
    double Tp;
    //taking inputs
    printf("Enter alpha:\n");
    scanf("%If",&a);
    printf("Enter rho:\n");
    scanf("%If",&sig);
    printf("Enter Rs:\n");
    scanf("%le",&Rs);
    printf("Enter Ts:\n");
    scanf("%le",&Ts);
    printf("Enter D:\n");
    scanf("%le",&D);
    Tp = Ts*sqrt((Rs*sqrt((1-a)/sig))/(2*D)); //expression evaluation
    printf("The result is %le",Tp); // printing the result
    return 0;



}
