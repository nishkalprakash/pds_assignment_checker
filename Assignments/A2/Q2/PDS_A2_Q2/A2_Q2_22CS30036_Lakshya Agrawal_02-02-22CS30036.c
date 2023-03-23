#include<stdio.h> // Header File included
#include<math.h> // Header File included

int main() // main function starts
{
    float alpha = 0.306,rho = 1.2,Rs = 6.96e8,Ts = 1.3654e-11,D=1.496e11,Tp; // declaring variables and initializing the value of the variables
    Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D); // calculating Tp from the default values (Tp = 8.591319e-02)
    printf("No user Input : Tp = %le\n",Tp); // printing the default Tp = 8.591319e-02
    printf("alpha = "); // printing the statement "alpha =" (e.g alpha = 0)
    scanf("%f",&alpha); // scanning the value of alpha from the terminal and storing it in the memory location allocated to the variable alpha(overwriting previous value)
    printf("rho = ");// printing the statement "rho =" (e.g rho = 1)
    scanf("%f",&rho);// scanning the value of rho from the terminal and storing it in the memory location allocated to the variable rho(overwriting previous value)
    printf("Rs = ");// printing the statement "Rs =" (e.g Rs = 1)
    scanf("%f",&Rs);// scanning the value of Rs from the terminal and storing it in the memory location allocated to the variable Rs(overwriting previous value)
    printf("Ts = ");// printing the statement "Ts =" (e.g Ts = 1)
    scanf("%f",&Ts);// scanning the value of Ts from the terminal and storing it in the memory location allocated to the variable Ts(overwriting previous value)
    printf("D = ");// printing the statement "D =" (e.g D = 1)
    scanf("%f",&D);// scanning the value of D from the terminal and storing it in the memory location allocated to the variable D(overwriting previous value)
    Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);  // calculating Tp from the user input values(Tp = 7.071068e-01)
    printf("Tp = %le\n",Tp); //printing new Tp = 7.071068e-01 in the exponential form

return 0; //terminate the main function
}
