/*
2.	Write a program that will prompt the user to enter a sequence of positive integer values.
At any time, your program should display the two largest values so far entered.
When the user has entered only one value, for the second largest number your program should display “Value not yet entered”.
Your program should terminate when the user enters any negative number.

For example, one test case may be as follows:

Enter numbers: 1 ↵
Largest number: 1
Second largest number: Value Not yet entered
Enter numbers: 1 2 5 4 ↵
Largest number: 5
Second largest number: 4
Enter numbers: 1 2 5 4 8 2 ↵
Largest number: 8
Second largest number: 5
Enter numbers: 1 2 5 4 8 2 1 1 ↵
Largest number: 8
Second largest number: 5
Enter numbers: 1 2 5 4 8 2 1 1 -10 ↵
<Program terminates>

Here ↵ denotes pressing of enter key.

*/
// Code creator: Nishkal Prakash
#include <stdio.h>

int main()
{
    // max1 stores the largest number, max2 stores the second largest number
    int max1 = -1, max2 = -1, num;
    while (1)
    {
        scanf("%d", &num); // Taking input from the user
        if (num < 0) // If the input is negative, then terminate the program
            break;
        if (num > max1){ // If the input is greater than the largest number, then update the largest and second largest numbers
            max2 = max1;
            max1 = num;
        }
        else if (num > max2) // If the input is greater than the second largest number, then update the second largest number
            max2 = num;
        printf("\nLargest number: %d\n", max1);
        printf("Second largest number: ");
        if (max2 == -1) // If the second largest number is -1, then the second largest number is not yet entered
            printf("Value not yet entered\n");
        else
            printf("%d\n", max2);
    }
    return 0;
}