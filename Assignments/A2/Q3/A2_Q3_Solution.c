/*Assume that you are going to deposit certain amount of money in bank fixed deposit. Write a program to read two unsigned integers representing the amount being deposited and the period of deposit in years. Next, read a floating point number indicating the applicable interest rate. Compute the total amount payable at the end of the deposit period assuming fixed interest rate computed.*/

// Roll No: 19CS91R05
// Name: Nishkal Prakash
#include <stdio.h>
int main()
{
    int amount, period;
    float interest_rate, total_amount;
    printf("Enter the amount being deposited: ");
    scanf("%d", &amount);
    printf("Enter the period of deposit in years: ");
    scanf("%d", &period);
    printf("Enter the applicable interest rate in %%: ");
    scanf("%f", &interest_rate);
    interest_rate /= 100;    // converting the interest rate from percentage to decimal
    total_amount = amount * (1 + interest_rate * period); // calculating the total amount payable using simple interest
    printf("Total amount payable at the end of the deposit period: %.2f\n", total_amount);
    return 0;
}

/*
Enter the amount being deposited: 100
Enter the period of deposit in years: 1
Enter the applicable interest rate in %: 1
Total amount payable at the end of the deposit period: 101.00
*/