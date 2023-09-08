// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int kms, hrs, rental, fuel;

    // Input data from user
    printf("Enter number of kilometeres travelled: ");
    scanf("%d", &kms);
    printf("Enter number of hours taxi was retained: ");
    scanf("%d", &hrs);

    // Computing rental charges
    if (hrs == 0)
        rental = 0;
    if (hrs >= 1 && hrs < 12)
        rental = 200;
    if (hrs >= 12 && hrs < 24)
        rental = 500;
    if (hrs >= 24)
        if (hrs % 24 == 0)
            rental = 500 + (hrs / 24) * 300;
        else
            rental = 500 + (hrs / 24 + 1) * 300;

    // Computing fuel consumptions charges
    if (kms <= 8)
        fuel = 20;
    if (kms > 8 && fuel <= 12)
        fuel = 20 + (kms - 8) * 10;
    if (kms > 12 && fuel <= 16)
        fuel = 20 + 4 * 10 + (kms - 12) * 8;
    if (kms > 16 && fuel <= 20)
        fuel = 20 + 4 * 10 + 4 * 8 + (kms - 16) * 6;
    if (kms > 20)
        fuel = 20 + 4 * 10 + 4 * 8 + 4 * 6 + (kms - 20) * 5;

    // Output final fare
    printf("Total Fare = %d\n", (rental + fuel));
}