//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int input_months, years;

    // Input age in months from user 
    printf("Enter age in months: ");
    scanf("%d", &input_months);

    // Calculating age in years
    if (input_months%12 == 0)
    {
        years = input_months/12;
    }
    else
    {
        years = input_months/12 + 1;
    }

    // Output age in proper format
    printf("The person is %d year(s) old\n", years);
}