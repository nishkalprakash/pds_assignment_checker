/*1.	Write a program to compute and display the taxi fare for the following situation. The total number of Kilometers travelled and the hours the taxi was retained will be input by the user as two integer numbers.  Taxi fare is computed based on the fuel consumption as per the following chart and vehicle rental as described below. If the number of hours retained is less than 1 hour, then there is no rental, for retaining between 1 hour to 12 hours, rental is charged at a flat rate of Rs. 200/-. For retaining between 12 hours and 24 hours, the rental is incremented by Rs. 300/-. For period exceeding a day, additional Rs. 300/- is charged for every additional  day or part of a day.

First 8 Km or less	20 Rs
Next 4 Km or less	10 Rs/Km
Next 4 Km or less	8 Rs/Km
Next 4 Km or less	6 Rs/Km
Beyond 20 Km	5 Rs/Km
*/

// Roll No: 19CS91R05
// Name: Nishkal Prakash

#include <stdio.h>
int main()
{
    int km, hours; // stores the user input
    printf("Enter km and hrs: ");
    scanf("%d%d", &km, &hours);
    int fare = 0; // stores the taxi fare
    if (km < 0 || hours < 0) // if the user enters negative values
    {
        printf("Invalid input\n");
        return 0;
    }
    // Calculating the fare based on the given distance chart
    if (km <= 8)
        fare += 20;
    else if (km <= 12)
        fare += 20 + (km - 8) * 10;
    else if (km <= 16)
        fare += 60 + (km - 12) * 8;
    else if (km <= 20)
        fare += 92 + (km - 16) * 6;
    else
        fare += 116 + (km - 20) * 5;

    // Calculating the fare based on the given rental chart
    if (hours < 1)
        fare += 0;
    else if (hours < 12)
        fare += 200;
    else if (hours < 24)
        fare += 500;
    else
        fare += 500 + (((hours - 24)/12)+1) * 300;
    printf("Fare: Rs. %d\n", fare);
}