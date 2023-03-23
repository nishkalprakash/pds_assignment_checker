#include<stdio.h>
#include<math.h>

int main()
{
    float alpha,rho,Rs,Ts,D,Tp; // specifying the variables

    printf("The value of alpha : \n");// printing these and taking input from the user
    scanf("%f", &alpha);

    printf("The value of rho : \n");// printing these and taking input from the user
    scanf("%f", &rho);

    printf("The value of Rs : \n");// printing these and taking input from the user
    scanf("%f", &Rs);

    printf("The value of Ts : \n");// printing these and taking input from the user
    scanf("%f", &Ts);

    printf("The value of D : \n");// printing these and taking input from the user
    scanf("%f", &D);

    printf("The value of Tp : \n");// printing these and taking input from the user
    scanf("%f", &Tp);

    Tp = Ts * sqrt((Rs * sqrt((1-alpha)/rho))/ 2 * D);//defining the value of Tp
    printf("The vale of Tp(from the user input): %e\n",Tp);//printing the value of Tp from the user's inputs

    alpha = 0.306;//specifying the default values of alpha
    rho = 1.2;//specifying the default values of rho
    Rs = 6.96e8;//specifying the default values of Rs
    Ts = 1.3654e-11;//specifying the default values of Ts
    D = 1.496e11;//specifying the default values of D

    Tp = Ts * sqrt((Rs * sqrt((1-alpha)/rho))/ 2 * D);//defining Tp
    printf("The vale of Tp (default): %e\n ",Tp);//printing the default value of Tp


    return 0;

}


