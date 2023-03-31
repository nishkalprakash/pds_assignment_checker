/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 3
* Description : Program to print Numero Pyramid
*/

#include <stdio.h>

int main()
{
    // Asking the user for number of rows to be printed
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // We start a loop that runs n times and hence prints n rows
    for(int i =0; i <n; i++)
    {
        // Defining another variable row because we will need to manipulate its value to print the desired numbers which cannot be done easily on i.
        // We use row = i + 1 because for row 1, i = 0
        int row = i+1;

        // Now to make it look like a pyramid we first need to print spaces to get the cursor to the central desired point and the number of spaces to be printed
        // depends on the row number by No. of spaces = No. of final row - No. of current row. This is because for the bottom most row we need no spaces but for row n - 1
        // we need one space and so on
        for(int s=0; s<n-i; s++)
        {
            printf(" ");
        }

        // The printing is done in 2 algorithms, first we print the ascending numbers then the descending

        // We note that the first number printed is the row number ( or row number % 10 for higher rows ), hence we start by that
        // Now this number goes up and prints successive numbers. The amount of numbers printed depends again on the row number as for row 1 we print 1 number in the ascending
        // fashion but in row 2 there are 2 numbers ascending (2,3) and in row 3 there are  3 numbers (3,4,5) and so on
        for(int f=0; f<=i; f++)
        {
            printf("%d", row%10);
            row++;
        }

        //We use this decrement to reset the row value because it gets incremented one extra time before above loop ends
        row--;

        // Now to print the descending order, we are at the highest number to be printed  but if we [print row directly it will print the highest number twice
        // for eg,if 3 4 5 is printed we will start the next print as 5 4 3 which is not desirable. Hence we add another decrement to mitigate that
        row--;

        // After removing that redundant print we can run the decrement loop but now this loop must run one less time than the other again to mitigate the extra print
        for(int b=0; b<=i-1; b++)
        {
            printf("%d", row%10);
            row--;
        }

        // At the end of the print we just print a new line character to move onto the next line
        printf("\n");
    }

    return 0;
}
