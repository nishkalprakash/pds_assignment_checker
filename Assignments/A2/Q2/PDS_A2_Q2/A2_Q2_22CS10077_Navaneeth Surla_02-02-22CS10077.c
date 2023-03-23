#include<stdio.h>
#include<math.h>
int main()
{
    double alpha,rho,Rs,Ts,D,a,b,c;
    printf("Enter the value of alpha\n");
    scanf("%lf",&alpha);
    printf("Enter the value of rho\n");
    scanf("%lf",&rho);
    printf("Enter the value of Rs\n");
    scanf("%lf",&Rs);
    printf("Enter the value of Ts\n");
    scanf("%lf",&Ts);
    printf("Enter the value of D\n");
    scanf("%lf",&D);
    a = sqrt((1-alpha)/rho);
    b = sqrt(Rs*a/(2*D));
    c = Ts*b;
    printf("The value of Tp is %le",c);
    //If user gives input then the output is 5.742861e-13
    //If values are predefined the the output is 2.924243e-311

}
