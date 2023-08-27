//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    unsigned int deposit_amount, period;
    float interest, final_amount;

    // Inputs from user
    printf("Enter deposit amount: ");
    scanf("%d", &deposit_amount);
    printf("Enter period of deposit in years: ");
    scanf("%d", &period);
    printf("Enter interest rate: ");
    scanf("%f", &interest);

    // Calculating final amount
    final_amount = deposit_amount + deposit_amount*interest/100*period;

    // Outputs final amount
    printf("Final amount: %f\n", final_amount);

}