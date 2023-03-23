// Program to find Tp
#include<stdio.h>
#include<math.h>

int main(){

    // Initializing variables
    double a;
    double s;
    double Rs;
    double Ts;
    double Tp;
    double D;
    //  a = 0.306;
    //  s = 1.2;
    //  Rs = 6.96e8;
    //  Ts = 1.3654e-11;
    //  D =  1.496e11
    // Reading inputs from user
                                                                               // a = alpha
    printf("Enter the value of alpha : \n");                                      // s= sigma
    scanf("%lf",&a);
    printf("Enter the value of sigma : \n");
    scanf("%lf",&s);
    printf("Enter the value of Rs : \n");                                // Asking user for inputs like alpha,sigma,Ts
    scanf("%lf",&Rs);
    printf("Enter the value of Ts : \n");
    scanf("%lf",&Ts);
    printf("Enter the value of D : \n");
    scanf("%lf",&D);

    double x = sqrt((1-a)/s);
    double y = sqrt((Rs*x)/(2*D));
    Tp = Ts*y;
    printf("The value of Tp is %le",Tp);                            // printing the value of Tp

    //If we directly supply the value , the answer comes out to 0. Additionally codeblocks is not allowing to use math.h library. ON running program ,we get something around 3e and even showing error like inf or infinte
    // We should use a better compiler. Since the double,long have a limited bits , they cannot be much precise sometime s for such a large values
    return 0;
}


