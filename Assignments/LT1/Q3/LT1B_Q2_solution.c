/*
2.   Write a program that will prompt the user to enter a sequence of positive integer values. At any time, your program should display the two largest values entered so far and also the two smallest values. When the user has entered only one value,  for  the second  largest  and second smallest numbers  your program  should  display “Value has not  yet been  entered”.  Your program should terminate when the user enters any negative number.

For example:

Enter numbers: 1 ↵
Largest number: 1
Second largest number: Value Not yet entered
Smallest number:1
Second smallest  number: Value Not yet entered

Enter numbers: 1 2 5 4 ↵
Largest number: 5
Second largest number: 4
Smallest number: 1
Second smallest number: 2

Enter numbers: 1 2 5 4 8 2 ↵
Largest number: 8
Second largest number: 5
Smallest number: 1
Second smallest number: 2

Enter numbers: 1 2 5 4 8 2 1 1 ↵
Largest number: 8
Second largest number: 5
Smallest number: 1
Second smallest number: 2

Enter numbers: 1 2 5 4 8 2 1 1 -10 ↵
<Program terminates> Here ↵ denotes pressing of enter key.
*/

// Name: Nishkal Prakash
// Roll: 19CS91R05
#include <stdio.h>

int main()
{
    int N; // N is the number of numbers to be entered (user defined)
    int L1=-1, L2=-1; // L1 is the largest number and L2 is the second largest number
    int S1=-1, S2=-1; // S1 is the smallest number and S2 is the second smallest number

    while (1)
    {
        printf("\nEnter the number: ");
        scanf("%d", &N);

        // If N is negative, then terminate the program
        if (N < 0)
        {
            printf("Program Terminated\n");
            break;
        }

        // Check if the entered number is the largest or second largest number
        if (L1 == -1)
        {
            L1 = N;
            printf("Largest number: %d\n", L1);
            printf("Second largest number: Value not yet entered\n");
        }
        else if (L2 == -1)
        {
            if (N > L1)
            {
                L2 = L1;
                L1 = N;
            }
            else
            {
                L2 = N;
            }
            printf("Largest number: %d\n", L1);
            printf("Second largest number: %d\n", L2);
        }
        else
        {
            if (N > L1)
            {
                L2 = L1;
                L1 = N;
            }
            else if (N > L2 && N != L1)
            {
                L2 = N;
            }
            printf("Largest number: %d\n", L1);
            printf("Second largest number: %d\n", L2);
        }

        // Check if the entered number is the smallest or second smallest number
        if (S1 == -1)
        {
            S1 = N;
            printf("Smallest number: %d\n", S1);
            printf("Second smallest number: Value not yet entered\n");
        }
        else if (S2 == -1)
        {
            if (N < S1)
            {
                S2 = S1;
                S1 = N;
            }
            else
            {
                S2 = N;
            }
            printf("Smallest number: %d\n", S1);
            printf("Second smallest number: %d\n", S2);
        }
        else
        {
            if (N < S1)
            {
                S2 = S1;
                S1 = N;
            }
            else if (N < S2 && N != S1)
            {
                S2 = N;
            }
            printf("Smallest number: %d\n", S1);
            printf("Second smallest number: %d\n", S2);
        }
    }
}