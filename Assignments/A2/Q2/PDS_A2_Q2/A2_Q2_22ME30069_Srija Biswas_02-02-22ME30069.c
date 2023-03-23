#include<stdio.h>// input output header file
#include<math.h> // math header file
int main()  //declaring main() function
{
    double alpha=0.306,rho=1.2,Rs=6.96e8,Ts=1.3654e-11,D=1.496e11,Tp;  //declaring variables
    printf("Enter the value for alpha\n");
    scanf("%lf",&alpha);                 //enter the values through keyboard
    printf("Enter the value for rho\n");
    scanf("%lf",&rho);
    printf("Enter the value for Rs\n");
    scanf("%le",&Rs);
    printf("Enter the value for Ts\n");
    scanf("%le",&Ts);
    printf("Enter the value for D\n");
    scanf("%le",&D);
    Tp=Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*D)); //compute required value using sqrt()
    printf("The value of Tp=%le\n",Tp);
    return 0;
}

