#include <stdio.h>
#include <math.h>
int main()
{
    float alpha, rho;
    double Rs, Ts, D, Tp;//for taking long float values as the test values are given
    /*alpha = 0.306, rho = 1.2;
    Rs = 6.96e8, Ts = 1.3654e-11, D = 1.496e11; **Code Was used for predefined value and I commented all print and scanf statements while execeuting for perfect execution*/
    printf("alpha: ");
    scanf("%e", &alpha);
    printf("rho: ");
    scanf("%e", &rho);
    printf("Rs: ");
    scanf("%le", &Rs);//%e and %le accepts exponential values as inputs (float and long float)
    printf("Ts: ");
    scanf("%le", &Ts);
    printf("D: ");
    scanf("%le", &D); //after taking all values systematically as mentioned in the input box given on Moodle
    Tp =Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*D)); //Using math.h Header file to use sqrt() function to perform square root operation
    printf("Tp: %le", Tp);  /*Inputting the test Values as
    alpha = 0.306
    rho = 1.2
    Rs = 6.96e8
    Ts = 1.3654e-11
    D = 1.496e11
    We get output as :
    Tp: 5.742861e-13*/
    return 0;
}
